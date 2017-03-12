//
//  PegController.cpp
//  testPegJump
//
//  Created by Jared Bebb on 3/10/17.
//  Copyright © 2017 Jared Bebb LLC. All rights reserved.
//

#include "PegController.hpp"
#include "PegJump.hpp"
#include "PegView.hpp"
#include <iostream>
#include <string.h>

bool quitApp = false;
bool quitGame = false;
PegJump newBoard();


void playGame(){
    PegView boardView;
    quitApp = false;
    while (quitApp == false) {
        std::string programTyped = NULL;
        std::string appTyped = NULL;
        std::cout << boardView.home;
        std::cin >> programTyped;
        if(programTyped == "Peg Jump"){
            int whichPeg = NULL;
            std::cout << boardView.welcome;
            quitGame = false;
            while(quitGame == false){
                std::cout << boardView.whatAction;
                std::cin >> appTyped;
                if (appTyped == "Remove") {
                    std::cout<< boardView.whichPeg;
                    std::cin >> whichPeg;
                    newBoard().removePeg(whichPeg);
                }
                if (appTyped == "Score") {
                    std::cout << newBoard().score;
                }
                
            }
            
        }
    }
    
    
}



