//
//  PegController.hpp
//  testPegJump
//
//  Created by Jared Bebb on 3/10/17.
//  Copyright © 2017 Jared Bebb LLC. All rights reserved.
//

#ifndef PegController_hpp
#define PegController_hpp

#include <stdio.h>
#include "PegJump.hpp"

class PegController{
public:
    PegJump newBoard();
    PegJump addPegs();
    
    PegController(){};
    ~PegController(){};
};

#endif /* PegController_hpp */
