#include <iostream>
#include <Windows.h>
#include "Vector3D.h"

using namespace std;

int main()
{
	Vector3D l, r;
	cin >> l;
	cout << l << endl;
	cin >> r;
	cout << r << endl;

	Vector3D t;
	t = l + r;
	cout << "a + b " << t << endl;
	t = l - r;
	cout << "a - b " << t << endl;
	cout << "a * b = " << l * r << endl;
	cout << "Vector3D count = " << Vector3D::Count() << endl;

	return 0;
}