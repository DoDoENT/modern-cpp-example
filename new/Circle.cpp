#include "Circle.hpp"

Circle::Circle( float radius ) noexcept :
    radius_( radius )
{}

float area( Circle const & circle ) noexcept 
{
    return circle.radius() * circle.radius() * 3.14159f;
}
