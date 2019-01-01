#pragma once

#include "Shape.hpp"
#include <Random.hpp>

class RandomShapeFactory
{
public:
    Shape * generateRandomShape();

private:
    RandomGenerator generator_;
};
