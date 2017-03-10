//
//  PegControllerTester.cpp
//  testPegJump
//
//  Created by Jared Bebb on 3/10/17.
//  Copyright © 2017 Jared Bebb LLC. All rights reserved.
//

#include "PegControllerTester.hpp"
#include "PegController.hpp"

#include <memory>
#include <cppunit/extensions/TestFactoryRegistry.h>
#include <cppunit/ui/text/TestRunner.h>
#include <cppunit/CompilerOutputter.h>
#include <cppunit/TestCase.h>
#include <cppunit/extensions/HelperMacros.h>

CPPUNIT_TEST_SUITE_NAMED_REGISTRATION( PegControllerTester, "PegControllerTester" );

void PegControllerTester::setUp ()
{
    controllerBoard.addPegs(10);
}

void PegControllerTester::test2 ()
{
    CPPUNIT_ASSERT_EQUAL(1, 1);
}

CppUnit::Test *suite2()
{
    CppUnit::TestFactoryRegistry &registry =
    CppUnit::TestFactoryRegistry::getRegistry();
    
    
    registry.registerFactory(
                             &CppUnit::TestFactoryRegistry::getRegistry( "PegControllerTester" ) );
    return registry.makeTest();
}
