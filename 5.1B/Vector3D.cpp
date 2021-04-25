#include "Vector3D.h"
#include "Exception.h"
Vector3D::Vector3D() { x = 0, y = 0, z = 0; }
Vector3D::Vector3D(double x = 0, double y = 0, double z = 0)
{
	this->x = x;
	this->y = y;
	this->z = z;
}
Vector3D::Vector3D(const Vector3D& A)
{
	x = A.GetX();
	y = A.GetY();
	z = A.GetZ();
}

Vector3D& Vector3D::operator = (const Vector3D& A)
{
	x = A.x;
	y = A.y;
	z = A.z;

	return *this;
}
ostream& operator << (ostream& out, const Vector3D& A)
{
	out << string(A);
	return out;
}
istream& operator >> (istream& in, Vector3D& A)
{
	cout << "X = "; in >> A.x;
	cout << "Y = "; in >> A.y;
	cout << "Z = "; in >> A.z;
	if (A.x == 0 && A.y == 0 && A.z == 0)
		throw invalid_argument("Invalid_argument");
	else if (A.x == 1 && A.y == 1 && A.z == 1)
		throw bad_exception();
	else if (A.x == 2 && A.y == 2 && A.z == 2)
		throw Exception("Exception");
	else if (A.x == 3 && A.y == 3 && A.z == 3)
		throw "Exception";
	return in;
}
Vector3D::operator string() const
{
	stringstream ss;
	ss << "X = " << x << endl;
	ss << "Y = " << y << endl;
	ss << "Z = " << z << endl;
	return ss.str();
}

Vector3D& Vector3D::operator ++ ()
{
	x++;
	y++;
	z++;
	return *this;
}
Vector3D& Vector3D::operator -- ()
{
	x--;
	y--;
	z--;
	return *this;
}
Vector3D Vector3D::operator ++ (int)
{
	Vector3D A(*this);
	x++;
	y++;
	z++;
	return A;
}
Vector3D Vector3D::operator -- (int)
{
	Vector3D A(*this);
	x--;
	y--;
	z--;
	return A;
}

void Vector3D::scalar() const
{
	int k;
	cout << "scallar = "; cin >> k;
	cout << "vektor" << "(" << x << ";" << y << ";" << z << ")" << endl;
	cout << "vector*scalar" << "(" << x * k << ";" << y * k << ";" << z * k << ")" << endl;
	cout << "=================================================================================================" << endl;
}

void Vector3D::isEqual() const
{
	cout << "porivnana vectoriv" << endl;
	if (x == y == z)
		cout << "x = ó ; y= z ; x=z" << endl;
	if (x == y && x != z)
		cout << " x = y ; y != z ; x != z " << endl;
	if (x == z && x != y)
		cout << " x = z ; x != y ; y != z " << endl;
	if (y == z && y != x)
		cout << " y = z ; x != y ; x != z " << endl;
	if (x != y && x != z)
		cout << " x != ó ; z != y ; x != z " << endl;
	cout << "==================================================================================================" << endl;
}
void Vector3D::isEqual2() const
{
	cout << "porivnana dovzhyn vectoriv" << endl;
	int c, v, b;
	c = sqrt(x * x + y * y);
	v = sqrt(y * y + z * z);
	b = sqrt(z * z + x * x);
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
