#pragma once
#include <sstream>
#include <iostream>

using namespace std;
class Pair
{
 
	int a;
	int b;
	public:
		Pair (int a=0, int b=0);
		Pair(const Pair& );
		Pair& operator=(const Pair&);
		
		int geta() const { return a; }
		int getb() const { return b; }
		void seta(int a) { this->a = a; }
		void setb(int b) { this->b = b; }
		operator string() const;
		friend ostream& operator << (ostream& out, const Pair&);
		friend istream& operator >> (istream& in, Pair& );

		friend Pair operator- (const Pair& p1, const Pair& p2);
};


