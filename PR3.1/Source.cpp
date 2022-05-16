#include <iostream>
#include "Rational.h"
#include <Windows.h>
using namespace std;


int main()
{
	Rational r1;
	Rational r2;
	Pair p1;
	Pair p2;
	cin>> r1;
	cin>> r2;
	p1 = r1;
	p2 = r2;
	
	cout << p1 << " - " << p2 << " = " << p1 - p2 << endl;
	cout << r1 << " / " << r2 << " = " << r1 / r2 << endl;
	cout << r1 << " - " << r2 << " = " << r1 - r2<<	endl;
	cout << r1 << " + " << r2 << " = " << r1 + r2 << endl;
	
	return 0;
}