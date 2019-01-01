#pragma once

#include "Rectangle.hpp"

class Square final : public Rectangle
{
public:
    Square( float side ) noexcept;

    Shape * clone() const override;
};
