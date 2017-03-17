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
#include <unordered_map>

class PegJump{
public:
    std::vector<int> foo;
    std::vector<int> createVectorMap(int mapSize);
    unsigned long vectorMapSize();
    std::vector<int> removePeg(int removePeg);
    
    PegJump(){};
    ~PegJump(){};
};

#endif /* pegJump_hpp */
