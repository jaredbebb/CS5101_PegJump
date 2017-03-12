//
//  PegView.hpp
//  testPegJump
//
//  Created by Jared Bebb on 3/10/17.
//  Copyright © 2017 Jared Bebb LLC. All rights reserved.
//

#ifndef PegView_hpp
#define PegView_hpp

#include <stdio.h>
#include <string>

class PegView{
    public:
    std::string home;
    std::string whatGame;
    std::string whatAction;
    std::string whichPeg;
    std::string welcome;
    std::string helpScreen;
    std::string end;
    PegView(){};
    ~PegView(){};
    
};

#endif /* PegView_hpp */
