#pragma once
#include <string>
#include "Pair.h"
#include <iostream>

using namespace std;

class Rational:public Pair
{
public:
	Rational (int a=0, int b=0) : Pair(a, b) {};
	Rational (const Rational& r);
	Rational(const Pair& p);
	Rational& operator=(const Rational& r);
	
	Pair getpair() const { return *this; }
	void setpair(Pair p) {	*this = p; }

	friend ostream& operator<< (ostream& os, const Rational& r);
	friend istream& operator>> (istream& is, Rational& r);
	operator string () const;
	
	friend Rational operator+(const Rational& r1, const Rational& r2);
	friend Rational operator-(const Rational& r1, const Rational& r2);
	friend Rational operator/(const Rational& r1, const Rational& r2);
	
};

