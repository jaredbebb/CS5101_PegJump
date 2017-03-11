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


unsigned long ten;
unsigned long currSize;
unsigned long twenty = 20;
void pegJumpTester::setUp ()
{
    myBoard.size = 1;
    myBoard.pegList = {1,2,3,4,5,6,7,8,9,10};
    unsigned long currSize = myBoard.pegListSize;
    unsigned long ten = 10;
    unsigned long twenty = 20;
    
}



void pegJumpTester::test1 ()
{
    
    CPPUNIT_ASSERT_EQUAL((myBoard.size), 1);
    CPPUNIT_ASSERT_EQUAL(myBoard.pegListSize, ten);

    
}



CppUnit::Test *suite2()
{
    CppUnit::TestFactoryRegistry &registry =
    CppUnit::TestFactoryRegistry::getRegistry();
    
    
    registry.registerFactory(
                             &CppUnit::TestFactoryRegistry::getRegistry( "ExampleTestCase" ) );
    return registry.makeTest();
}



