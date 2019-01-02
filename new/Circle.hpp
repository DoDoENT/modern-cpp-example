#pragma once

struct Circle
{
    float const radius;

    Circle( float radius ) noexcept;
};

float area( Circle const & ) noexcept;
