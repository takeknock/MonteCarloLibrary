#pragma once

#include <cppunit/extensions/HelperMacros.h>
#include <cppunit/ui/text/TestRunner.h>
#include <cppunit/TestResultCollector.h>
#include <cppunit/CompilerOutputter.h>

class PathTest : public CPPUNIT_NS::TestFixture {
public:
    CPPUNIT_TEST_SUITE(PathTest);
    CPPUNIT_TEST(testOperatorEqual);
    CPPUNIT_TEST(testOperatorAccessor);
    CPPUNIT_TEST_SUITE_END();

public:
    void setUp();
    void testOperatorEqual();
    void testOperatorAccessor();
    void tearDown();

};
    
