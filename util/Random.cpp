#include "Random.hpp"

RandomGenerator::RandomGenerator() noexcept :
    generator_{ std::random_device{}() }
{}

float RandomGenerator::randomFloat() noexcept
{
    std::uniform_real_distribution distrib{ -1000.f, 1000.f };
    return distrib( generator_ );
}

RandomGenerator::Shape RandomGenerator::randomShape() noexcept
{
    std::uniform_int_distribution distrib{ 0, 2 };
    return static_cast< RandomGenerator::Shape >( distrib( generator_ ) );
}
