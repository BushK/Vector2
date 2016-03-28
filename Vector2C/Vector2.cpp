#include "Vector2.h"


Vector2::Vector2() :x_(0), y_(0 )
{
}
Vector2::Vector2(float x, float y) :x_(x), y_(y)
{
}
Vector2::~Vector2()
{
}

void Vector2::SetX(const float x)
{
	x_ = x;
}

void Vector2::SetY(const float y)
{
	y_ = y;
}

float Vector2::getX() const
{
	return x_;
}

float Vector2::getY() const
{
	return y_;
}