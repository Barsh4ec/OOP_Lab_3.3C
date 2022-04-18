#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP_Lab_3.3C/Vector3D.cpp"
#include "../OOP_Lab_3.3C/Object.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Vector3D l(2, 4, -3);
			Vector3D r(3, -5, -2);
			int t = l * r;
			Assert::AreEqual(-8, t);
		}
	};
}
