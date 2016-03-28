#include<iostream>
#include "Vector2.h"
 
using namespace std;
int main()
{
	Vector2 vec;

	cout << vec.getX() << endl;
	cout << vec.getY() << endl;

	vec.SetX(50);
	vec.SetY(25);
cout << vec.getX() << endl;
cout << vec.getY() << endl;

Vector2 vecB(23, 54);
cout << vecB.getX() << endl;
cout << vecB.getY() << endl;


	return 0;
}