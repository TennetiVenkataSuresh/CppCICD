#include "TestBasicMath.h"

void
TestBasicMath::testAddition(void)
{
	CPPUNIT_ASSERT(5 == mTestObj->Addition(2,3));
}

void
TestBasicMath::testMultiply(void)
{
	CPPUNIT_ASSERT(6 == mTestObj->Multiply(2,3));
}

void TestBasicMath::setUp(void)
{
	mTestObj = new CBasicMath();
}

void TestBasicMath::tearDown(void)
{
	delete mTestObj;
}
