#include "Vector3D.h"
#include <iostream>
#include <string>
#include <sstream>
#include <windows.h>

using namespace std;

Vector3D::Vector3D()
{
	x = 0;
	y = 0;
	z = 0;
}
Vector3D::Vector3D(double a, double b, double c)
{
	x = a;
	y = b;
	z = c;
}
Vector3D::Vector3D(const Vector3D& s)
{
	x = s.x;
	y = s.y;
	z = s.z;
}
Vector3D::~Vector3D()
{
	x, y, z;
}

Vector3D Vector3D::operator + (Vector3D r) {
	Vector3D t(0, 0, 0);
	t.x = this->x + r.x;
	t.y = this->y + r.y;
	t.z = this->z + r.z;
	return t;
}

Vector3D Vector3D::operator - (Vector3D r) {
	Vector3D t(0, 0, 0);
	t.x = this->x - r.x;
	t.y = this->y - r.y;
	t.z = this->z - r.z;
	return t;
}

double Vector3D::operator * (Vector3D r) {
	Vector3D t(0, 0, 0);
	t.x = this->x * r.x;
	t.y = this->y * r.y;
	t.z = this->z * r.z;
	return t.x + t.y + t.z;
}

Vector3D::operator string() const {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	stringstream sout;
	sout << "вектор = (" << x << " , " << y << " , " << z << ")" << endl;
	return sout.str();
}

ostream& operator << (ostream& out, const Vector3D& a)
{
	out << (string)a;
	return out;
}
istream& operator >> (istream& in, Vector3D& a)
{
	cout << "x = "; in >> a.x;
	cout << "y = "; in >> a.y;
	cout << "z = "; in >> a.z;
	return in;
}
Vector3D& Vector3D::operator ++ ()
{
	++x;
	return *this;
}
Vector3D& Vector3D::operator -- ()
{
	--x;
	return *this;
}
Vector3D Vector3D::operator ++ (int)
{
	Vector3D t(*this);
	x++;
	return t;
}
Vector3D Vector3D::operator -- (int)
{
	Vector3D t(*this);
	x--;
	return t;
}