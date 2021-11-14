#include "pch.h"
#include "CppUnitTest.h"
#include <cmath>


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
	
   
		TEST_METHOD(TestMethod1)
		{
			int k,x,y;
			k = (sin(x) / y * y) + (cos(y) / x * x);
			Assert::AreEqual(k, 5);
		}
 
	};
}
