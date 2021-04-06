#include "pch.h"
#include "CppUnitTest.h"
#include "../lab3.3d/Rational_Public.h"
#include "../lab3.3d/Rational_Public.cpp"
#include "../lab3.3d/Pair.h"
#include "../lab3.3d/Pair.cpp"



using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest33D
{
	TEST_CLASS(UnitTest33D)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Rational_Public a(2, 10), b(2, 10);
			Assert::AreEqual(a == b, true);
		}
	};
}