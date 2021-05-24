#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_7_1/Lab_7_1.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Labtest71
{
	TEST_CLASS(Labtest71)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			vector<int> a = { 3, -5, 23, 0, 4 };
			auto min = *std::min_element(a.begin(), a.end(), myfn);
			Assert::AreEqual(min, -5);
		}
	};
}
