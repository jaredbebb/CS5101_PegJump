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
unsigned long zero;
unsigned long ten;


void pegJumpTester::setUp ()
{
    zeroPegs.createVectorMap(0);
    tenPegs.createVectorMap(10);
    zero = 0;
    ten = 10;
}



void pegJumpTester::test1 ()
{
    CPPUNIT_ASSERT_EQUAL(zeroPegs.vectorMapSize(), zero);
    CPPUNIT_ASSERT_EQUAL(tenPegs.vectorMapSize(), ten);
}



CppUnit::Test *suite2()
{
    CppUnit::TestFactoryRegistry &registry =
    CppUnit::TestFactoryRegistry::getRegistry();
    
    
    registry.registerFactory(
                             &CppUnit::TestFactoryRegistry::getRegistry( "ExampleTestCase" ) );
    return registry.makeTest();
}



