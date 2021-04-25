#include "pch.h"
#include "CppUnitTest.h"
#include "../5.1B/Vector3D.cpp"
#include "../5.1B/Vector3D.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Vector3D A(1, 1, 1);
			++A;
			Assert::AreEqual(A.GetX(), 2.0);
		}
	};
}
