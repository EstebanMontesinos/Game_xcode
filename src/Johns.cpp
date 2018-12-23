//
//  Johns.cpp
//  Game310
//
//  Created by Esteban Montesinos on 11/27/18.
//
#include <stdio.h>
#include "Johns.h"
#include "ofMain.h"
#include "Fireball.h"


Johns::Johns(int size){
    this->size = size;
    johns.load("cowboy.png");
    x=0;
    y=900;
    dx=1;
    dy=-1;
    lifes = 3;
    maze = new Maze_m1;
    
    
}
void Johns::update(){
    
}
int Johns::getX(){
    return x+(size/2);
}
int Johns::getY(){
    return y+(size/2);
}


void Johns::setX(int x){
    this->x = x;
}
void Johns::setY(int y){
    this->y = y;
}

int Johns::getSize(){
    return size;
}
void Johns::draw(){
    
    ofSetColor(255, 255,255);
    johns.draw(x,y);
}
void Johns::keyPressed(int key){
    //   if(key==57357){
    //       y-=50;
    //   }
    //   if(key==57359){
    //       y+=50;
    //   }
    //   if(key==57358){
    //       x+=50;
    //   }
    //   if(key==57356){
    //       x-=50;
    //   }
    
    
    
}
void Johns::reset() {
    y = 900;
    x = 0;
    lifes--;
}





