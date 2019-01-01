#pragma once

#include "Circle.hpp"
#include "Rectangle.hpp"
#include "Square.hpp"

#include <Random.hpp>

#include <variant>

using Shape = std::variant< Circle, Rectangle, Square >;

class RandomShapeGenerator
{
public:
    Shape generateRandomShape();

private:
    RandomGenerator generator_;
};
