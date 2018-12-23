//
//  exitS.cpp
//  Game310
//
//  Created by Esteban Montesinos on 12/13/18.
//

#include <stdio.h>
#include"exitS.h"

exitS::exitS(int x, int y,int size){
    sign.load("exit-2.png");
    this->x = x+10;
    this->y = y+10;
    this->size=size;
}
void exitS::update(){
}
int exitS::getX(){
    return x+(size/2);
}
int exitS::getY(){
    return y+(size/2);
}


void exitS::setX(int x){
    this->x = x;
}
void exitS::setY(int y){
    this->y = y;
}

int exitS::getSize(){
    return size;
}
void exitS::draw(){
    ofSetColor(255, 255,255);
    sign.draw(x,y);
}

