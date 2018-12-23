//
//  MagicD.cpp
//  Game310
//
//  Created by Esteban Montesinos on 12/12/18.
//

#include <stdio.h>
#include"MagicD.h"
MagicD::MagicD(int x, int y,int size){
    drinkP.load("can.png");
    this->x = x+10;
    this->y = y+10;
    this->size=size;
}
void MagicD::update(){
}
int MagicD::getX(){
    return x+(size/2);
}
int MagicD::getY(){
    return y+(size/2);
}


void MagicD::setX(int x){
    this->x = x;
}
void MagicD::setY(int y){
    this->y = y;
}

int MagicD::getSize(){
    return size;
}
void MagicD::draw(){
    ofSetColor(255, 255,255);
    drinkP.draw(x,y);
}
void MagicD::keyPressed(int key){
    //  if(key==){ If we decide to have a key pressed.
}



