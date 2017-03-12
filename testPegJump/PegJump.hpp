//
//  pegJump.hpp
//  testPegJump
//
//  Created by Jared Bebb on 3/7/17.
//  Copyright © 2017 Jared Bebb LLC. All rights reserved.
//

#ifndef pegJump_hpp
#define pegJump_hpp

#include <stdio.h>
#include <vector>

class PegJump{
public:
    int size;
    int myNeighbor;
    int score;
    
    int changeSize(int newSize);
    std::vector<int> pegList;
    unsigned long pegListSize;
    std::vector<int> removePeg(int pos);
    
    
    PegJump(){};
    ~PegJump(){};
};

#endif /* pegJump_hpp */
