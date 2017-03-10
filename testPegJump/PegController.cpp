//
//  PegController.cpp
//  testPegJump
//
//  Created by Jared Bebb on 3/10/17.
//  Copyright © 2017 Jared Bebb LLC. All rights reserved.
//

#include "PegController.hpp"
#include "PegJump.hpp"

PegJump newBoard;

//add the users specified pegs to the board
PegJump addPegs(int pegNumber){
    for (int i =1; i <= pegNumber; i++) {
        newBoard.pegList.push_back(i);
    }
    return newBoard;
}
