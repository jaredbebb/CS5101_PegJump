//
//  pegJump.cpp
//  testPegJump
//
//  Created by Jared Bebb on 3/7/17.
//  Copyright © 2017 Jared Bebb LLC. All rights reserved.
//

#include "PegJump.hpp"

#include <vector>
#include <iostream>
#include <unordered_map>

//builds a board with variable size
std::vector<int> PegJump::createVectorMap(int mapSize){
    for (int i =1; i <= mapSize; i++) {
        foo.push_back(i);
    }
    return foo;
}

//gets the size of the board
unsigned long PegJump::vectorMapSize(){
    return foo.size();
}

std::vector<int> PegJump::removePeg(int removePeg){
    foo.erase(foo.begin()+removePeg-1);
    return foo;
}












