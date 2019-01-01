#include "Rectangle.hpp"

Rectangle::Rectangle( float width, float height ) noexcept :
    width_ ( width ),
    height_( height )
{}

float Rectangle::area() const noexcept 
{
    return width_ * height_;
}

Shape * Rectangle::clone() const
{
    return new Rectangle( width_, height_ );
}
