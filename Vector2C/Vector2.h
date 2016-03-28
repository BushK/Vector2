#include<iostream>
#ifndef Vector2_H
#define Vector2_H
class Vector2
{
private:
	float x_;
	float y_;
public:
	Vector2();
	Vector2(float x, float y);
	~Vector2();
	void SetX(const float x);
	void SetY(const float y);

	float getX()const;
	float getY()const;
};
#endif
