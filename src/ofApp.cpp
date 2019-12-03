#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    ofBackground(255, 255, 255);
    ofSetCircleResolution(64);
    ofSetFrameRate(60);

    for ( int i = 0; i < NUM1; i++)
    {
        for ( int j = 0; j < NUM2; j++)
        {
            crs[i][j] = new Circle();
            crs[i][j]->pos.set(ofGetWidth() * (i + 1) / NUM1 - ofGetWidth()/(NUM1 * 2), ofGetHeight() * (j + 1) / NUM2 - ofGetHeight()/(NUM2 * 2));
        }
    }
}

//--------------------------------------------------------------
void ofApp::update(){
    for ( int i = 0; i < NUM1; i++)
    {
        for ( int j = 0; j < NUM2; j++)
        {
            crs[i][j]->update();
        }
    }

}

//--------------------------------------------------------------
void ofApp::draw(){
    for ( int i = 0; i < NUM1; i++)
    {
        for ( int j = 0; j < NUM2; j++)
        {
            crs[i][j]->draw();
        }
    }
}

