#pragma once

#include "Shape.hpp"

class Circle final : public Shape
{
public:
    Circle(float radius) noexcept;

    float   area()  const noexcept override;
    Shape * clone() const override;

  private:
    float radius_;
};
