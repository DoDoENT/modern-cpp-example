#include "Square.hpp"

Square::Square( float side ) noexcept :
    Rectangle( side, side )
{}

Shape * Square::clone() const 
{
    return new Square( width_ );
}
