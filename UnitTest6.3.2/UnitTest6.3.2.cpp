#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\User\source\repos\pr_6.3.2\lab_6.3.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest632
{
	TEST_CLASS(UnitTest632)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int size = 2;

			int a[size] = { 2, 3 };
			int b[size] = { 2, 3 };


			int Sum = (a, b, 3);
			Assert::AreEqual(Sum, 3);
		}
	};
}
