#include "Rectangle.hpp"

Rectangle::Rectangle( float const width, float const height ) noexcept :
    width_( width ),
    height_( height )
{}

float area( Rectangle const & rect ) noexcept 
{
    return rect.width() * rect.height();
}
