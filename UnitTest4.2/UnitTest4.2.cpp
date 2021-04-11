#include "pch.h"
#include "CppUnitTest.h"
#include "../4.2/Mammals.h"
#include "../4.2/Mammals.cpp"
#include "../4.2/people.h"
#include "../4.2/people.cpp"
#include <time.h>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest42
{
	TEST_CLASS(UnitTest42)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			people A;
			srand(unsigned(time(NULL)));
			double a = A.Years();
			Assert::AreEqual(a, A.Years());

			

		}
	};
}
