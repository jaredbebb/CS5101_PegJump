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

class PegJump{
public:
    int size;
    int myNeighbor;
    
    int changeSize(int newSize);
    
    PegJump(){};
    ~PegJump(){};
};

#endif /* pegJump_hpp */
