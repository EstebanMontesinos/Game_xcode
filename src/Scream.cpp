//
//  Scream.cpp
//  Game310
//
//  Created by Esteban Montesinos on 11/27/18.
//

#include <stdio.h>
#include"Scream.h"
#include "ofMain.h"
#include "Maze_m1.h"
Scream::Scream(int x, int y, int speed, int direction) {
    scream.load("scream.png");
    this->x = x;
    this->y = y;
    this->speed = speed;
    this->direction = direction;
    maze = new Maze_m1;
    shot = false;
}
void Scream::update() {
    
    //direction handling
    switch (direction) {
        case 0://move right
            
            if (maze->getWall((x+50) / 50, y / 50) == 1 || maze->getWall(x / 50, y / 50)  == 1) {
                speed = speed * -1;
            }
            x += speed;
            break;
        case 1://move down
            
            if (maze->getWall(x / 50 ,( y + 50)/ 50) == 1 || maze->getWall(x / 50, y / 50) == 1) {
                speed = speed * -1;
            }
            y += speed;
            break;
        case 2://move left›
            
            if (maze->getWall((x -50)/ 50, y / 50) == 1 || maze->getWall(x / 50, y / 50) == 1) {
                speed = speed * -1;
            }
            x -= speed;
            break;
        case 3://move down
            
            if (maze->getWall(x / 50, (y + 50) / 50) == 1 || maze->getWall(x / 50, y / 50) == 1) {
                speed = speed * -1;
            }
            y += speed;
            break;
        default://move up
            
            if (maze->getWall(x / 50, (y - 50) / 50) == 1 || maze->getWall(x / 50, y / 50) == 1) {
                speed = speed * -1;
            }
            y -= speed;
            break;
    }
}

int Scream::getX() {
    return x ;
}
int Scream::getY() {
    return y ;
}

void Scream::setX(int x) {
    this->x = x;
}
void Scream::setY(int y) {
    this->y = y;
}

int Scream::getSize() {
    return size;
}
void Scream::draw() {
    
    ofSetColor(255, 255, 255);
    scream.draw(x, y);
    //scream.draw(50,600);
    // scream.draw(900,250);
    //scream.draw(550,800);
}

bool Scream::getshot() {
    return shot;
}



