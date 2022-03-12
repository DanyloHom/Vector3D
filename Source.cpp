#include <iostream>
#include "Vector3D.h"
using namespace std;

int main()
{
	Vector3D a, b;
	int aa, bb;

	a.Read();
	a.Display();
	b.Read();
	b.Display();

	cout << "enter figure to multiply by first vector" << endl;
	cin >> aa;
	cout << "enter figure to multiply by second vector" << endl;
	cin >> bb;

	a = a.ScalMultiplay(aa);
	b = b.ScalMultiplay(bb);

	cout << "result of multiplication by first" << endl;
	a.Display();
	cout << "result of multiplication by second" << endl;
	b.Display();	

	cout << "length of first vector = " << a.Len() << endl;
	cout << "length of second vector = " << b.Len() << endl;
	cout << endl;

	if (Compare(a, b))
		cout << "vectors are the same " << endl;
	if (!Compare(a, b))
		cout << "vectors aren`t the same " << endl;
	if (Greate(a, b))
		cout << "first vector is larger than second" << endl;
	if (NGreate(a, b))
		cout << "first vector isn`t larger than second" << endl;
	if (Less(a, b))
		cout << "first vector is less than second" << endl;
	if (NLess(a, b))
		cout << "first vector isn`t less than second" << endl;
	if (Equal(a, b))
		cout << "vectors are equal" << endl;
	if (NEqual(a, b))
		cout << "vectors aren`t equal" << endl;



	cout << endl;
	cout << "toString method test" << endl << "first vector info : " << a.toString() << endl << "second vector info :" << b.toString() << endl;
	
}
