#pragma once
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class Vector3D
{
	double x;
	double y;
	double z;
public:

	Vector3D();
	void SetX(int value) { x = value; };
	void SetY(int value) { y = value; };
	void SetZ(int value) { z = value; };
	double GetX() const { return x; };
	double GetY() const { return y; };
	double GetZ() const { return z; };
	Vector3D(double, double, double);
	Vector3D(const Vector3D&);
	Vector3D& operator = (const Vector3D&);
	friend ostream& operator << (ostream&, const Vector3D&);
	friend istream& operator >> (istream&, Vector3D&);
	operator string() const;
	Vector3D& operator ++ ();
	Vector3D& operator -- ();
	Vector3D operator ++ (int);
	Vector3D operator -- (int);
	void scalar() const;
	void Distance() const { cout << "dov. vectora  " << sqrt((x * x) + (y * y) + (z * z)) << endl; };
	void isEqual() const;
	void isEqual2() const;
};

