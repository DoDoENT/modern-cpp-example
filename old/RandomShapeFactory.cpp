#include "RandomShapeFactory.hpp"

#include "Circle.hpp"
#include "Rectangle.hpp"
#include "Square.hpp"

Shape * RandomShapeFactory::generateRandomShape()
{
    RandomGenerator::Shape randomShape = generator_.randomShape();
    switch( randomShape )
    {
        case RandomGenerator::Shape::Circle:
            return new Circle{ generator_.randomFloat() };
        case RandomGenerator::Shape::Rectangle:
            return new Rectangle{ generator_.randomFloat(), generator_.randomFloat() };
        case RandomGenerator::Shape::Square:
            return new Square{ generator_.randomFloat() };
    }
}
