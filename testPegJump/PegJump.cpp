//
//  pegJump.cpp
//  testPegJump
//
//  Created by Jared Bebb on 3/7/17.
//  Copyright © 2017 Jared Bebb LLC. All rights reserved.
//

#include "PegJump.hpp"

#include <vector>

int size = 0;
int board = 0;

std::vector<int> pegList = {1,2,3,4,5,6,7,8,9,10};

unsigned long pegListSize = pegList.size();

int score = 0;


//changes the size of the board
int changeSize(int newSize){
    size = newSize;
    return size;
}

std::vector<int> removePeg(int pos){
    pegList = pegList.erase(pos);
    return pegList;
}

int getScore(){
    return score;
}


//add the users specified pegs to the board










