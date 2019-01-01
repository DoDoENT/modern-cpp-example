#pragma once

#include <random>

class RandomGenerator
{
public:
    enum class Shape
    {
        Circle,
        Rectangle,
        Square
    };

    RandomGenerator() noexcept;

    float randomFloat() noexcept;
    Shape randomShape() noexcept;

private:
    std::mt19937 generator_;
};
