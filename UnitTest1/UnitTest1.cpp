#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double test;
			const double K = 1;
			const double I = 1;
			test = (K, I);
			Assert::AreEqual(test, 1.);
		}
	};
}
