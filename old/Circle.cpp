#include "Circle.hpp"

Circle::Circle( float radius ) noexcept :
    radius_( radius )
{}

float Circle::area() const noexcept
{
    return radius_ * radius_ * 3.14159f;
}

Shape * Circle::clone() const 
{
    return new Circle( radius_ );
}
