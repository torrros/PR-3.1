#include "Rational.h"
#include <iostream>
#include <sstream>

using namespace std;

Rational::Rational(const Rational& p)
{
	*this = p;
}

Rational::Rational(const Pair& p)
{
	seta(p.geta());
	setb(p.getb());

}


Rational& Rational::operator=(const Rational& p)
{
	seta(p.geta());
	setb(p.getb());
	return *this;
}

ostream& operator<<(ostream & os, const Rational & r)
{
	os << string(r);
	return os;
}

istream& operator>>(istream & is, Rational & r)
{
	int a, b;
	cout << " a -  "; cin >> a;
	cout << " b -  "; cin >> b;
	r.seta(a);
	r.setb(b);
	return is;
	
}

Rational::operator string() const
{
	stringstream ss;
	ss << geta() << "/" << getb();
	return ss.str();
}

Rational operator+ (const Rational& r1, const Rational& r2)
{
 return Rational(r1.geta() * r2.getb() + r2.geta() * r1.getb(), r1.getb() * r2.getb());
}

Rational operator- (const Rational& r1, const Rational& r2)
{
	return Rational(r1.geta() * r2.getb() - r2.geta() * r1.getb(), r1.getb() * r2.getb());
}

Rational operator/ (const Rational& r1, const Rational& r2)
{
		return Rational(r1.geta() * r2.getb(),	r1.getb() * r2.geta());
}