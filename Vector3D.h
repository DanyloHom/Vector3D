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
	string toString();

	friend bool Compare(Vector3D l, Vector3D r);
	friend bool Less(Vector3D l, Vector3D r);
	friend bool Greate(Vector3D l, Vector3D r);
	friend bool Equal(Vector3D l, Vector3D r);
	friend bool NLess(Vector3D l, Vector3D r);
	friend bool NGreate(Vector3D l, Vector3D r);
	friend bool NEqual(Vector3D l, Vector3D r);

};

