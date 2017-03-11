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
    int tenPegArr[10] = {1,2,3,4,5,6,7,8,9,10};
    
    int changeSize(int newSize);
    std::vector<int> pegList;
    unsigned long pegListSize;
    
    
    PegJump(){};
    ~PegJump(){};
};

#endif /* pegJump_hpp */
