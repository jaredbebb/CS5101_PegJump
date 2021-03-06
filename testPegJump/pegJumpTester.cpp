//
//  pegJumpTester.cpp
//  testPegJump
//
//  Created by Jared Bebb on 3/7/17.
//  Copyright © 2017 Jared Bebb LLC. All rights reserved.
//

#include "pegJumpTester.hpp"
#include "PegJump.hpp"

#include <vector>


#include <memory>
#include <cppunit/extensions/TestFactoryRegistry.h>
#include <cppunit/ui/text/TestRunner.h>
#include <cppunit/CompilerOutputter.h>
#include <cppunit/TestCase.h>
#include <cppunit/extensions/HelperMacros.h>

CPPUNIT_TEST_SUITE_NAMED_REGISTRATION( pegJumpTester, "ExampleTestCase" );

PegJump zeroPegs;
PegJump tenPegs;
PegJump elevenPegs;
unsigned long zero;
unsigned long ten;


void pegJumpTester::setUp ()
{
    zero = 0;
    ten = 10;
    zeroPegs.createVectorMap(0);
    tenPegs.createVectorMap(10);
    
    elevenPegs.createVectorMap(11);
    elevenPegs.removePeg(8);

}



void pegJumpTester::test1 ()
{
    CPPUNIT_ASSERT_EQUAL(zeroPegs.vectorMapSize(), zero);
    CPPUNIT_ASSERT_EQUAL(tenPegs.vectorMapSize(), ten);
    CPPUNIT_ASSERT_EQUAL(elevenPegs.vectorMapSize(), ten);
    CPPUNIT_ASSERT_EQUAL(10,elevenPegs.foo.at(8));
    CPPUNIT_ASSERT_EQUAL(11, elevenPegs.foo.at(9));
}



CppUnit::Test *suite2()
{
    CppUnit::TestFactoryRegistry &registry =
    CppUnit::TestFactoryRegistry::getRegistry();
    
    
    registry.registerFactory(
                             &CppUnit::TestFactoryRegistry::getRegistry( "ExampleTestCase" ) );
    return registry.makeTest();
}



