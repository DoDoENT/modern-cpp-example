#include "RandomShapeGenerator.hpp"

Shape RandomShapeGenerator::generateRandomShape()
{
    RandomGenerator::Shape randomShape = generator_.randomShape();
    switch( randomShape )
    {
        case RandomGenerator::Shape::Circle:
            return Circle{ generator_.randomFloat() };
        case RandomGenerator::Shape::Rectangle:
            return Rectangle{ generator_.randomFloat(), generator_.randomFloat() };
        case RandomGenerator::Shape::Square:
            return Square{ generator_.randomFloat() };
    }
}
