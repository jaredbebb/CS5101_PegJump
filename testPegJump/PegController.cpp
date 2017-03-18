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

void PegController::playGame(){
    PegView boardView;
    PegJump newBoard;
    bool quitApp = false;
    std::string programTyped;
    std::string appTyped;
    while (quitApp == false) {
        std::string programTyped = NULL;
        std::string appTyped = NULL;
        std::cout << boardView.viewMessage("home");
        std::cin >> programTyped;
        if(programTyped == "quit"){
            quitApp = true;
        }
        if(programTyped == "Peg Jump"){
            int whichPeg = NULL;
            std::cout << boardView.viewMessage("welcome");
            int boardsize;
            std::cout << "What size of board do you want, enter in integer format, size 1-100";
            std::cin >> boardsize;
            newBoard.createVectorMap(boardsize);
            bool quitGame = false;
            while(quitGame == false){
                std::cout << boardView.viewMessage("whatAction");
                std::cin >> appTyped;
                if (appTyped == "Remove") {
                    std::cout<< boardView.viewMessage("whichPeg");
                    std::cin >> whichPeg;
                    newBoard.removePeg(whichPeg);
                }
                if (appTyped == "Score") {
                    std::cout << newBoard.vectorMapSize();
                }
                if (appTyped == "quit") {
                    quitGame = true;
                }
                
            }
            
        }
    }
    
    
}


