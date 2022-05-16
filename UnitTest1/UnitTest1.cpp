#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\vladt\source\repos\PR3.1\PR3.1\Pair.cpp"
#include "C:\Users\vladt\source\repos\PR3.1\PR3.1\Rational.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Rational r1(1,2);
			Rational r2(3,4);
			//(r1.geta() * r2.getb() + r2.geta() * r1.getb(), r1.getb() * r2.getb());
			Rational r3 = r1 + r2;
			
			Assert::IsTrue( r3.getpair().geta()	==10&& r3.getpair().getb() ==8);
		}
	};
}
