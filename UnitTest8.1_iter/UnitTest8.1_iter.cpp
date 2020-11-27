#include "pch.h"
#include "CppUnitTest.h"
#include "../lab8.1_iter_C/lab8_1_iter.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest81iter
{
	TEST_CLASS(UnitTest81iter)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			int count = 17;

			char* s = "sasha.stu..de..nt";

			t = Find_Dot(s, count);
			Assert::AreEqual(t, 13);
		}
	};
}
