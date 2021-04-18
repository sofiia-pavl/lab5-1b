#include "pch.h"
#include "CppUnitTest.h"
#include"C:\Users\Софія\source\repos\lab5-1b\lab5-1b\Fraction.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest51b
{
	TEST_CLASS(UnitTest51b)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Fraction a(423, 4);
			int r = a.getOne();
			Assert::AreEqual(r, 423);
		}
	};
}
