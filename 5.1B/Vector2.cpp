
#include "Vector2.h"
#include<iostream>
#include <string>
#include <sstream>

using namespace std;
Vector2::Vector2()
	: Vector3D() {}

Vector2::Vector2(double a, double b, double c)
	: Vector3D(a, b, c) {}

Vector2::Vector2(const Vector2& t)
	: Vector3D(t) {}

Vector2::operator string() const
{
	stringstream sout;
	sout << "(" << getX() << "; " << getY() << ";" << getZ() << ")";
	return sout.str();
}

double operator * (Vector2 g, Vector2 f)
{
	double t = g.getX() * f.getX() + g.getY() * f.getY() + g.getZ() * f.getZ();
	return t;
}


istream& operator >> (istream& in, Vector2& a)
{
	double x, y, z;
	cout << "x = "; in >> x;
	cout << "y = "; in >> y;
	cout << "z = "; in >> z;
	a.setX(x), a.setY(y), a.setZ(z);

	return in;
}
ostream& operator << (ostream& out, Vector2& a)
{
	out << string(a) << endl;
	return out;
}

Vector2& Vector2::operator ++()
{
	setX(getX() + 1);
	setY(getY() + 1);
	setZ(getZ() + 1);
	return *this;
}

Vector2& Vector2::operator --()
{
	setX(getX() - 1);
	setY(getY() - 1);
	setZ(getZ() - 1);
	return *this;
}

Vector2 Vector2::operator ++(int)
{
	Vector2 tmp = *this;
	setX(getX() + 1);
	setY(getY() + 1);
	setZ(getZ() + 1);
	return tmp;
}

Vector2 Vector2::operator --(int)
{
	Vector2 tmp = *this;
	setX(getX() - 1);
	setY(getY() - 1);
	setZ(getZ() - 1);
	return tmp;
}
void Vector2::scalar() const
{
	int k;
	cout << "scallar = "; cin >> k;
	cout << "vektor" << "(" << getX() << ";" << getY() << ";" << getZ() << ")" << endl;
	cout << "vector*scalar" << "(" << getX() * k << ";" << getY() * k << ";" << getZ() * k << ")" << endl;
	cout << "=================================================================================================" << endl;
}

void Vector2::isEqual() const
{
	cout << "porivnana vectoriv" << endl;
	if (getX() == getY() && getY() == getZ())
		cout << "x = ó ; y= z ; x=z" << endl;
	if (getX() == getY() && getY() != getZ())
		cout << " x = y ; y != z ; x != z " << endl;
	if (getX() == getZ() && getX() != getY())
		cout << " x = z ; x != y ; y != z " << endl;
	if (getY() == getZ() && getY() == getX())
		cout << " y = z ; x != y ; x != z " << endl;
	if (getX() != getZ() && getX() != getY())
		cout << " x != ó ; z != y ; x != z " << endl;
	cout << "==================================================================================================" << endl;
}
void Vector2::isEqual2() const
{
	cout << "porivnana dovzhyn vectoriv" << endl;
	double c, v, b;
	c = sqrt((getX() * getX()) + (getY() * getY()));
	v = sqrt((getY() * getY()) + (getZ() * getZ()));
	b = sqrt((getZ() * getZ()) + (getX() * getX()));
	cout << "dovzhyna xy = " << c << endl;
	cout << "dovzhyna yz = " << v << endl;
	cout << "dovzhyna zx = " << b << endl;
	if (c > v && v > b)
		cout << "xó > yz > zx" << endl;
	if (c < v && v < b)
		cout << "xó < yz < zx" << endl;
	if (c > v && v < b)
		cout << "xó > yz < zx" << endl;
	if (c < v && v > b)
		cout << "xó < yz > zx" << endl;
	if (c == v && v == b)
		cout << "xó = yz = zx" << endl;
	if (c > v && v == b)
		cout << "xó < yz = zx" << endl;
	if (c < v && v == b)
		cout << "xó < yz = zx" << endl;
	if (c == v && v > b)
		cout << "xó = yz > zx" << endl;
	if (c == v && v < b)
		cout << "xó = yz < zx" << endl;
	cout << "==================================================================================================" << endl;
}
