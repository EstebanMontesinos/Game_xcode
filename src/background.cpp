//
//  background.cpp
//  Game310
//
//  Created by Esteban Montesinos on 11/27/18.
//

#include <stdio.h>
#include "background.h"
#include "ofMain.h"

background::background(){
    bg.load("redblock.png");
}
void background::draw(){
    ofSetColor(255, 255, 255);
    bg.draw(0,0,ofGetWidth(),ofGetHeight());
}
