//
//  Circle.cpp
//  scallUpdownApp
//
//  Created by tomokazu yokoi on 2019/12/03.
//

#include "Circle.hpp"

Circle::Circle()
{
    pos.x = ofGetWidth()/2;
    pos.y = ofGetHeight()/2;
    diameter = 10;
    radian = 0;
}

void Circle::update()
{
    diameter = diameter + sin(ofDegToRad(radian))/10;
    
    radian += 2;
    //    cout << sin(ofDegToRad(radian)) << endl;
}

void Circle::draw()
{
    ofSetColor(255, 9, 9);
    ofDrawCircle(pos.x, pos.y, diameter);
}
