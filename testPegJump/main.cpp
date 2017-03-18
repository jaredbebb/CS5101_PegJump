

#include <iostream>
#include "PegJump.hpp"
#include "pegJumpTester.hpp"
#include "PegController.hpp"

#include <vector>

#include <memory>
#include <cppunit/extensions/TestFactoryRegistry.h>
#include <cppunit/ui/text/TestRunner.h>
#include <cppunit/CompilerOutputter.h>
#include <cppunit/TestCase.h>
#include <cppunit/extensions/HelperMacros.h>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World..!\n";
    
    PegController mainController;
    mainController.playGame();
    
    
    // if command line contains "-selftest" then this is the post build check
    // => the output must be in the compiler error format.
    bool selfTest = (argc > 1)  &&
    (std::string("-selftest") == argv[1]);
    
    
    CppUnit::TextUi::TestRunner runner;
    //runner.addTest( ExampleTestCase::suite() );   // Add the top suite to the test runner
    runner.addTest( pegJumpTester::suite() );   // Add the top suite to the test runner
    
    
    if ( selfTest )
    { // Change the default outputter to a compiler error format outputter
        // The test runner owns the new outputter.
        runner.setOutputter( CppUnit::CompilerOutputter::defaultOutputter(
                                                                          &runner.result(),
                                                                          std::cerr ) );
    }
    
    
    // Run the test.
    bool wasSucessful = runner.run( "" );
    
    
    // Return error code 1 if any tests failed.
    return wasSucessful ? 0 : 1;
    
    

    
    

}
