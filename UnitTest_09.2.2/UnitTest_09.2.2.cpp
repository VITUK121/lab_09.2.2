#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest0922
{
	TEST_CLASS(UnitTest0922)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(__LINE__,14);
		}
	};
}
