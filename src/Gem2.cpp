//
//  Gem2.cpp
//  Game310
//
//  Created by Esteban Montesinos on 12/12/18.
//

#include <stdio.h>
#include"Gem2.h"
Gem2::Gem2(int x, int y,int size,int points){
    gemP2.load("diamond.png");
    this->x = x+10;
    this->y = y+10;
    this->size=size;
    this->points=points;
}
void Gem2::update(){
}
int Gem2::getX(){
    return x+(size/2);
}
int Gem2::getY(){
    return y+(size/2);
}


void Gem2::setX(int x){
    this->x = x;
}
void Gem2::setY(int y){
    this->y = y;
}

int Gem2::getSize(){
    return size;
}
void Gem2::draw(){
    ofSetColor(255, 255,255);
    gemP2.draw(x,y);
}
void Gem2::keyPressed(int key){
    //  if(key==){ If we decide to have a key pressed.
}
void Gem2::setpoints(int p){
    this->p=points;
}


