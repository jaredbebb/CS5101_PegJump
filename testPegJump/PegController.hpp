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
#include "PegView.hpp"

class PegController{
public:
    void playGame();
    PegController(){};
    ~PegController(){};
};

#endif /* PegController_hpp */
