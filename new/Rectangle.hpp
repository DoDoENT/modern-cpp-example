#pragma once

struct Rectangle
{
    float const width;
    float const height;

    Rectangle( float width, float height ) noexcept;
};


float area( Rectangle const & ) noexcept;
