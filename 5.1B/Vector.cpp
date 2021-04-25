
#include "Vector.h"
#include<iostream>
#include <string>
#include <sstream>

using namespace std;

Vector::Vector()
	: Vector3D() {}

Vector::Vector(double a, double b, double c)
	: Vector3D(a, b, c) {}

Vector::Vector(const Vector& t)
	: Vector3D(t) {}

double operator * (Vector g, Vector f)
{
	double t = g.getX() * f.getX() + g.getY() * f.getY() + g.getZ() * f.getZ();
	return t;
}
void Vector::scalar() const
{
	int k;
	cout << "scallar = "; cin >> k;
	cout << "vektor" << "(" << getX() << ";" << getY() << ";" << getZ() << ")" << endl;
	cout << "vector*scalar" << "(" << getX() * k << ";" << getY() * k << ";" << getZ() * k << ")" << endl;
	cout << "=================================================================================================" << endl;
}

void Vector::isEqual() const
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
void Vector::isEqual2() const
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




Vector& Vector::operator ++()
{
	setX(getX() + 1);
	setY(getY() + 1);
	setZ(getZ() + 1);
	return *this;
}

Vector& Vector::operator --()
{
	setX(getX() - 1);
	setY(getY() - 1);
	setZ(getZ() - 1);
	return *this;
}

Vector Vector::operator ++(int)
{
	Vector tmp = *this;
	setX(getX() + 1);
	setY(getY() + 1);
	setZ(getZ() + 1);
	return tmp;
}

Vector Vector::operator --(int)
{
	Vector tmp = *this;
	setX(getX() - 1);
	setY(getY() - 1);
	setZ(getZ() - 1);
	return tmp;
}

bool operator==(Vector g, Vector f)
{
	return false;
}
