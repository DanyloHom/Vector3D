#include "Vector3D.h"
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

void Vector3D::setX(int value)
{
	x = value;
}

void Vector3D::setY(int value)
{
	y = value;
}

void Vector3D::setZ(int value)
{
	z = value;
}

void Vector3D::Init(int x, int y, int z)
{
	setX(x);
	setY(y);
	setZ(z);
}

void Vector3D::Read()
{
	int xx, yy, zz;
	cout << "x = ";
	cin >> xx;
	cout << endl;
	cout << "y = ";
	cin >> yy;
	cout << endl;
	cout << "z = ";
	cin >> zz;
	Init(xx, yy, zz);
	cout << endl;
}

void Vector3D::Display()
{
	cout << endl;
	cout << "( " << x << " , " << y << " , " << z << " )" << endl;
	cout << endl;

}

Vector3D Vector3D::ScalMultiplay(int value)
{
	Vector3D a;

	a.x = this->x * value;
	a.y = this->y * value;
	a.z = this->z * value;

	return a;
}

double Vector3D::Len()
{
	return sqrt( pow(x, 2) + pow(y, 2) + pow(z, 2));
}

void Vector3D::LenCompare(Vector3D a)
{
	if (a.Len() < Len())
		cout << "first vector is large than second vector" << endl;
	if (a.Len() > Len())
		cout << "second vector is large than first vector" << endl;
	if (a.Len() == Len())
		cout << "vectors are equall" << endl;
}

string Vector3D::toString() 
{
	stringstream sout;

	sout << "x = " << x << " , y = " << y << " , z = " << z << endl;

	return sout.str();
}

void Vector3D::Compare(Vector3D a)
{
	if (a.x == x && a.y == y && a.z == z)
		cout << "vectors are equall" << endl;
	else
		cout<< "vectors are different" << endl;
}