//
//  Gem.cpp
//  Game310
//
//  Created by Esteban Montesinos on 12/11/18.
//

#include <stdio.h>
#include"Gem.h"
Gem::Gem(int x, int y,int size,int points){
    gemP.load("ruby.png");
    this->x = x+10;
    this->y = y+10;
    this->size=size;
    this->points=points;
}
void Gem::update(){
}
int Gem::getX(){
    return x+(size/2);
}
int Gem::getY(){
    return y+(size/2);
}


void Gem::setX(int x){
    this->x = x;
}
void Gem::setY(int y){
    this->y = y;
}

int Gem::getSize(){
    return size;
}
void Gem::draw(){
    ofSetColor(255, 255,255);
    gemP.draw(x,y);
}
void Gem::keyPressed(int key){
    //  if(key==){ If we decide to have a key pressed.
}
void Gem::setpoints(int p){
    this->p=points;
}











