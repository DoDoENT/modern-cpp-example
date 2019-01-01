#include "RandomShapeFactory.hpp"

#include <chrono>
#include <iostream>
#include <vector>

float sumAreas( std::vector< Shape * > const & shapes ) noexcept
{
    float totalArea = 0.f;
    for ( auto && shape : shapes )
    {
        totalArea += shape->area();
    }
    return totalArea;
}

std::vector< Shape * > copyShapes( std::vector< Shape * > const & shapes )
{
    std::vector< Shape * > result;
    result.reserve( shapes.size() );
    for ( auto i = 0U; i < shapes.size(); ++i ) 
    {
        result.push_back( shapes[i]->clone() );
    }
    return result;
}

std::vector< Shape * > createShapeVector( std::size_t numShapes )
{
    std::vector< Shape * > result;
    result.reserve( numShapes );
    RandomShapeFactory shapeFactory;
    for ( auto i = 0U; i < numShapes; ++i ) 
    {
        result.push_back( shapeFactory.generateRandomShape() );
    }
    return result;
}

void clearShapes( std::vector< Shape * > & shapes ) 
{
    for ( auto i = 0U; i < shapes.size(); ++i ) 
    {
        delete shapes[ i ];
    }
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
