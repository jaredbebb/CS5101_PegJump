//taken from http://wiki.c2.com/?DirtSimpleCppUnitExample
//using this code as standard for testing the project

#include "ExampleTestCase.hpp"

#include <memory>
#include <cppunit/extensions/TestFactoryRegistry.h>
#include <cppunit/ui/text/TestRunner.h>
#include <cppunit/CompilerOutputter.h>
#include <cppunit/TestCase.h>
#include <cppunit/extensions/HelperMacros.h>

//CPPUNIT_TEST_SUITE_NAMED_REGISTRATION( ExampleTestCase, "ExampleTestCase" );
//
//
//void ExampleTestCase::setUp ()
//{
//    m_value1 = 2.0;
//    m_value2 = 3.0;
//}
//
//
//
//void ExampleTestCase::example ()
//{
//    CPPUNIT_ASSERT (1 == 1);
//}
//
//
//
//void ExampleTestCase::anotherExample ()
//{
//    CPPUNIT_ASSERT (2 == 2);
//}
//
//
//
//void ExampleTestCase::testEquals ()
//{
//    std::auto_ptr<long>	l1 (new long (12));
//    std::auto_ptr<long>	l2 (new long (12));
//    
//    
//    CPPUNIT_ASSERT_DOUBLES_EQUAL (m_value1, 2.0, 0.01);
//    CPPUNIT_ASSERT_DOUBLES_EQUAL (m_value2, 3.0, 0.01);
//    CPPUNIT_ASSERT_EQUAL (12, 12);
//    CPPUNIT_ASSERT_EQUAL (12L, 12L);
//    CPPUNIT_ASSERT_EQUAL (*l1, *l2);
//    
//    
//    CPPUNIT_ASSERT(12L == 12L);
//    CPPUNIT_ASSERT_DOUBLES_EQUAL (12.0, 11.99, 0.5);
//}
//
//
//CppUnit::Test *suite()
//{
//    CppUnit::TestFactoryRegistry &registry =
//    CppUnit::TestFactoryRegistry::getRegistry();
//    
//    
//    registry.registerFactory(
//                             &CppUnit::TestFactoryRegistry::getRegistry( "ExampleTestCase" ) );
//    return registry.makeTest();
//}
//
