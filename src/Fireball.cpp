//
//  Fireball.cpp
//  Game310
//
//  Created by Esteban Montesinos on 12/6/18.
//

#include <stdio.h>
#include "Fireball.h"
#include "ofMain.h"

Fireball :: Fireball(int size,int x,int y,int speed,int direction ){
    this->size=size;
    this->x = x;
    this->y =y;
    this->speed = speed;
    this->direction = direction;
}
void Fireball::update(){
    switch(direction){
        case 0://move right
            x += speed;
            break;
        case 1://move down
            y += speed;
            break;
        case 2://move left›
            x -= speed;
            break;
        case 3://move up›
            y -= speed;
            break;
        default://move up
            y -= speed;
            break;
    }
}

int Fireball::getX(){
    return x + (size /2) ;
}
int Fireball::getY(){
    return y + (size/2);
}

void Fireball::setX(int x){
    this->x = x;
}
void Fireball::setY(int y){
    this->y = y;
}

int Fireball::getSize(){
    return size;
}

void Fireball::draw(){
    ofSetColor(0, 255, 0);
    ofDrawCircle(x, y, size);
}
int Fireball::getdirection() {
    return direction;
}


