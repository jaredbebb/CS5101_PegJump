//
//  pegJumpTester.cpp
//  testPegJump
//
//  Created by Jared Bebb on 3/7/17.
//  Copyright © 2017 Jared Bebb LLC. All rights reserved.
//

#include "pegJumpTester.hpp"
#include "PegJump.hpp"


#include <memory>
#include <cppunit/extensions/TestFactoryRegistry.h>
#include <cppunit/ui/text/TestRunner.h>
#include <cppunit/CompilerOutputter.h>
#include <cppunit/TestCase.h>
#include <cppunit/extensions/HelperMacros.h>

CPPUNIT_TEST_SUITE_NAMED_REGISTRATION( pegJumpTester, "ExampleTestCase" );


void pegJumpTester::setUp ()
{
    myBoard.size = 1;
}



void pegJumpTester::test1 ()
{
    CPPUNIT_ASSERT_EQUAL((myBoard.size), 1);
}



CppUnit::Test *suite()
{
    CppUnit::TestFactoryRegistry &registry =
    CppUnit::TestFactoryRegistry::getRegistry();
    
    
    registry.registerFactory(
                             &CppUnit::TestFactoryRegistry::getRegistry( "ExampleTestCase" ) );
    return registry.makeTest();
}



