#pragma once
#include <string>
#include "Object.h"
using namespace std;

class Vector3D : public Object
{
	double x, y, z;
public:
	Vector3D();
	Vector3D(double, double, double);
	Vector3D(const Vector3D&);
	~Vector3D();

	Vector3D operator + (Vector3D r);
	Vector3D operator - (Vector3D r);
	double operator * (Vector3D r);

	friend ostream& operator << (ostream&, const Vector3D&);
	friend istream& operator >> (istream&, Vector3D&);

	operator string() const;

	Vector3D& operator ++ ();
	Vector3D& operator -- ();
	Vector3D operator ++ (int);
	Vector3D operator -- (int);
};