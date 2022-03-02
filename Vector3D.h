#pragma once
#include <string>
#include <sstream>
using namespace std;

class Vector3D
{
private:
	int x;
	int y;
	int z;
public:
	int getX()const { return x; }
	int getY()const { return y; }
	int getZ()const { return z; }
	void setX(int value);
	void setY(int value);
	void setZ(int value);
	void Init(int x, int y, int z);
	void Read();
	void Display();
	Vector3D ScalMultiplay(int value);
	double Len();
	void LenCompare(Vector3D a);
	string toString();
	void Compare(Vector3D a);
};

