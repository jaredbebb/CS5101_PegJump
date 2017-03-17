//
//  PegController.hpp
//  testPegJump
//
//  Created by Jared Bebb on 3/10/17.
//  Copyright © 2017 Jared Bebb LLC. All rights reserved.
//

#ifndef PegController_hpp
#define PegController_hpp

#include <stdio.h>
#include "PegJump.hpp"
#include "PegView.cpp"

class PegController{
public:
    bool quitApp;
    bool quitGame;
    void playGame();
    PegView boardView;
    PegJump newBoard();
    PegJump addPegs();
    
    std::string programTyped;
    std::string appTyped;
    
    PegController(){};
    ~PegController(){};
};

#endif /* PegController_hpp */
