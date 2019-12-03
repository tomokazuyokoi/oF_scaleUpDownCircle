#pragma once
#include "ofMain.h"

//
//  Circle.hpp
//  scallUpdownApp
//
//  Created by tomokazu yokoi on 2019/12/03.
//

#ifndef Circle_hpp
#define Circle_hpp

#include <stdio.h>



class Circle
{
public:
    Circle();
    void update();
    void draw();

    ofVec2f pos;
    float diameter;
    float radian;
};

#endif /* Circle_hpp */
