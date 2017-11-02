#include "CppUnitFrameworkHeaders.h"
#include "CBasicMath.h"

class TestBasicMath : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE(TestBasicMath);
	CPPUNIT_TEST(testAddition);
	CPPUNIT_TEST(testMultiply);
	CPPUNIT_TEST_SUITE_END();

public:
	void setUp(void);
	void tearDown(void);

protected:
	void testAddition(void);
	void testMultiply(void);

private:

	CBasicMath *mTestObj;
};

CPPUNIT_TEST_SUITE_REGISTRATION( TestBasicMath );