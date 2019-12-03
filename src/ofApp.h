#pragma once

#include "ofMain.h"
#include "Circle.hpp"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

    static const int NUM1 = 8;
    static const int NUM2 = 5;
    Circle* crs[NUM1][NUM2];
};
