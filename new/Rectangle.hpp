#pragma once

class Rectangle
{
public:
    Rectangle( float width, float height ) noexcept;

    auto width () const noexcept { return width_;  }
    auto height() const noexcept { return height_; }

private:
    float width_;
    float height_;
};


float area( Rectangle const & ) noexcept;
