#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_1.3/Vector2D.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest13
{
	TEST_CLASS(UnitTest13)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Vector2D m, l;
			m.Init(1, 2);
			l.Init(5, 4);
			bool a;
			a = Comparison_Less(m, l);
			Assert::AreEqual(a, true);
		}
	};
}
