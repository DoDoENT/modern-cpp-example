#include "Rectangle.hpp"

Rectangle::Rectangle( float const width, float const height ) noexcept :
    width( width ),
    height( height )
{}

float area( Rectangle const & rect ) noexcept 
{
    return rect.width * rect.height;
}
