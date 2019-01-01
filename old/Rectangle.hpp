#pragma once

#include "Shape.hpp"

class Rectangle : public Shape
{
public:
    Rectangle( float width, float height ) noexcept;

    float   area()  const noexcept override;
    Shape * clone() const override;

protected:
    float width_;
    float height_;
};
