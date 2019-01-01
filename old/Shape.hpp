#pragma once

class Shape
{
public:
    virtual ~Shape();
    virtual float   area () const noexcept = 0;
    virtual Shape * clone() const          = 0;
};
