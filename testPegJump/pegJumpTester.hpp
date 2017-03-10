//
//  pegJumpTester.hpp
//  testPegJump
//
//  Created by Jared Bebb on 3/7/17.
//  Copyright © 2017 Jared Bebb LLC. All rights reserved.
//

#ifndef pegJumpTester_hpp
#define pegJumpTester_hpp

#include <stdio.h>

#include <memory>
#include <cppunit/extensions/TestFactoryRegistry.h>
#include <cppunit/ui/text/TestRunner.h>
#include <cppunit/CompilerOutputter.h>
#include <cppunit/TestCase.h>
#include <cppunit/extensions/HelperMacros.h>

#include "PegJump.hpp"

class pegJumpTester : public CppUnit::TestCase
{
    
    
    CPPUNIT_TEST_SUITE( pegJumpTester );
    CPPUNIT_TEST( test1 );
    CPPUNIT_TEST_SUITE_END();
    
    
    double m_value1;
    double m_value2;
    void test1();
    PegJump myBoard;

    
    
public:
    
    
    void			setUp ();
    
};

#endif /* pegJumpTester_hpp */
