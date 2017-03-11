//
//  PegControllerTester.hpp
//  testPegJump
//
//  Created by Jared Bebb on 3/10/17.
//  Copyright © 2017 Jared Bebb LLC. All rights reserved.
//

#ifndef PegControllerTester_hpp
#define PegControllerTester_hpp

#include <stdio.h>

#include <memory>
#include <cppunit/extensions/TestFactoryRegistry.h>
#include <cppunit/ui/text/TestRunner.h>
#include <cppunit/CompilerOutputter.h>
#include <cppunit/TestCase.h>
#include <cppunit/extensions/HelperMacros.h>

#include "PegController.hpp"
#include "PegJump.hpp"

class PegControllerTester : public CppUnit::TestCase
{
        CPPUNIT_TEST_SUITE(PegControllerTester );
        CPPUNIT_TEST( test2);
        CPPUNIT_TEST_SUITE_END();
    
        void test2();
        PegController controllerBoard;
    
    public:

    
        void setUp ();
};

#endif /* PegControllerTester_hpp */
