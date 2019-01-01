#include "RandomShapeGenerator.hpp"

#include <chrono>
#include <iostream>
#include <vector>

float sumAreas( std::vector< Shape > const & shapes ) noexcept
{
    float totalArea = 0.f;
    for ( auto && shape : shapes )
    {
        totalArea += std::visit
        (
            []( auto const & concreteShape )
            {
                return area( concreteShape );
            },
            shape
        );
    }
    return totalArea;
}

auto copyShapes( std::vector< Shape > shapes )
{
    return shapes;
}

auto createShapeVector( std::size_t numShapes )
{
    std::vector< Shape > result;
    result.reserve( numShapes );
    RandomShapeGenerator shapeGenerator;
    for ( auto i = 0U; i < numShapes; ++i ) 
    {
        result.emplace_back( shapeGenerator.generateRandomShape() );
    }
    return result;
}

void clearShapes( std::vector< Shape > & shapes )
{
    shapes.clear();
}

int main( int argc, char ** argv )
{
    using Timer = std::chrono::high_resolution_clock;
    using Seconds = std::chrono::duration< double >;

    auto beginTs = Timer::now();
    
    auto ts = Timer::now();
    auto shapeVector = createShapeVector( 100000000 );
    Seconds timeToCreate = Timer::now() - ts;

    std::cout << "Time to create: " << timeToCreate.count() << " s" << std::endl;

    ts = Timer::now();
    auto shapeCopy = copyShapes( shapeVector );
    Seconds timeToCopy = Timer::now() - ts;

    std::cout << "Time to copy: " << timeToCopy.count() << " s" << std::endl;

    ts = Timer::now();
    auto totalArea = sumAreas( shapeVector );
    Seconds timeToSum = Timer::now() - ts;

    std::cout << "Time to sum areas: " << timeToSum.count() << " s" << std::endl;

    ts = Timer::now();
    clearShapes( shapeCopy );
    clearShapes( shapeVector );
    Seconds timeToClear = Timer::now() - ts;

    std::cout << "Time to clear both vectors: " << timeToClear.count() << " s" << std::endl;

    Seconds totalExecutionTime = Timer::now() - beginTs;
    std::cout << "Total program execution time: " << totalExecutionTime.count() << " s" << std::endl;
    
    return 0;
}
