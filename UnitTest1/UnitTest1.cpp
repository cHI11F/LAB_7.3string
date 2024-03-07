#include "pch.h"
#include "CppUnitTest.h"
#include "../LAB_8.1string/LAB_8.1string.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestCountFunction)
        {
            const string str = "++-+-+-=-";
            int expected_count = 9;
            Assert::AreEqual(expected_count, Count(str));
        }

        TEST_METHOD(TestChangeFunction)
        {
            const string str = "++-+-+-=-";
            string result = Change(str);
            string expected_result = "******************";
            Assert::AreEqual(expected_result, result);
        }
    };
}
