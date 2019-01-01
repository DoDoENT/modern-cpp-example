#pragma once

class Circle
{
public:
    Circle( float radius ) noexcept;

    auto radius() const noexcept { return radius_; }

private:
    float radius_;
};

float area( Circle const & ) noexcept;
