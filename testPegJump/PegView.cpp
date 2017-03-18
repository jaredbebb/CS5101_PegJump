//
//  PegView.cpp
//  testPegJump
//
//  Created by Jared Bebb on 3/10/17.
//  Copyright © 2017 Jared Bebb LLC. All rights reserved.
//

#include "PegView.hpp"
#include <string>

std::string PegView::viewMessage(std::string pickMessage)
{
    std::string message;
    if (pickMessage == "home") {
        message = "Home Screen";
    }

    if (pickMessage == "whatGame") {
        message = "What game would you like to play?";
    }
    if (pickMessage == "welcome") {
        message = "Hi, welcome to PegJump";
    }
    
    if (pickMessage == "whatAction") {
        message = "What do you want to do";
    }
    if (pickMessage == "whichPeg") {
        message = "Which Peg?";
    }
    if (pickMessage == "helpScreen") {
        message = "To start game, type start game\n to find help, type help. If you want to exit, type exit. To get the score, type score.";
    }
    if (pickMessage == "end") {
        message = "Thanks for playing";
    }

    return message;
}

