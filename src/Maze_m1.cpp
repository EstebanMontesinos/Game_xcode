//
//  Maze_m1.cpp
//  Game310
//
//  Created by Esteban Montesinos on 11/29/18.
//

#include <stdio.h>
#include "Maze_m1.h"
#include "ofMain.h"

void Maze_m1 :: setup(){
    
    
}
void Maze_m1::update(){
    
}
void Maze_m1::draw(){
    //botom
    ofSetColor(0,0,0);
    ofDrawRectangle(0, 950,50,50);
    ofDrawRectangle(0, 850, 50, 50);
    ofDrawRectangle(50, 950, 50, 50);
    ofDrawRectangle(100, 950, 50, 50);
    ofDrawRectangle(150, 950, 50, 50);
    ofDrawRectangle(200, 950, 50, 50);
    ofDrawRectangle(250, 950, 50, 50);
    ofDrawRectangle(300, 950, 50, 50);
    ofDrawRectangle(350, 950, 50, 50);
    ofDrawRectangle(400, 950, 50, 50);
    ofDrawRectangle(450, 950, 50, 50);
    ofDrawRectangle(500, 950, 50, 50);
    ofDrawRectangle(550, 950, 50, 50);
    ofDrawRectangle(650, 950, 50, 50);
    ofDrawRectangle(700, 950, 50, 50);
    ofDrawRectangle(750, 950, 50, 50);
    ofDrawRectangle(800, 950, 50, 50);
    ofDrawRectangle(850, 950, 50, 50);
    ofDrawRectangle(900, 950, 50, 50);
    ofDrawRectangle(950, 950, 50, 50);
    //left side
    ofDrawRectangle(0, 800, 50, 50);
    ofDrawRectangle(0, 750, 50, 50);
    ofDrawRectangle(0, 700, 50, 50);
    ofDrawRectangle(0, 650, 50, 50);
    ofDrawRectangle(0, 600, 50, 50);
    ofDrawRectangle(0, 550, 50, 50);
    ofDrawRectangle(0, 500, 50, 50);
    ofDrawRectangle(0, 450, 50, 50);
    ofDrawRectangle(0, 400, 50, 50);
    ofDrawRectangle(0, 350, 50, 50);
    ofDrawRectangle(0, 300, 50, 50);
    ofDrawRectangle(0, 250, 50, 50);
    ofDrawRectangle(0, 200, 50, 50);
    ofDrawRectangle(0, 150, 50, 50);
    ofDrawRectangle(0, 100, 50, 50);
    ofDrawRectangle(0, 50, 50, 50);
    ofDrawRectangle(0, 0, 50, 50);
    //top
    ofDrawRectangle(50, 0, 50, 50);
    ofDrawRectangle(100, 0, 50, 50);
    ofDrawRectangle(150, 0, 50, 50);
    ofDrawRectangle(200, 0, 50, 50);
    ofDrawRectangle(250, 0, 50, 50);
    ofDrawRectangle(300, 0, 50, 50);
    ofDrawRectangle(350, 0, 50, 50);
    ofDrawRectangle(400, 0, 50, 50);
    ofDrawRectangle(450, 0, 50, 50);
    ofDrawRectangle(500, 0, 50, 50);
    ofDrawRectangle(550, 0, 50, 50);
    ofDrawRectangle(600, 0, 50, 50);
    ofDrawRectangle(650, 0, 50, 50);
    ofDrawRectangle(700, 0, 50, 50);
    ofDrawRectangle(750, 0, 50, 50);
    ofDrawRectangle(800, 0, 50, 50);
    ofDrawRectangle(850, 0, 50, 50);
    ofDrawRectangle(900, 0, 50, 50);
    ofDrawRectangle(950, 0, 50, 50);
    //right side
    ofDrawRectangle(950, 50, 50, 50);
    ofDrawRectangle(950, 100, 50, 50);
    ofDrawRectangle(950, 150, 50, 50);
    ofDrawRectangle(950, 200, 50, 50);
    ofDrawRectangle(950, 250, 50, 50);
    ofDrawRectangle(950, 300, 50, 50);
    ofDrawRectangle(950, 350, 50, 50);
    ofDrawRectangle(950, 400, 50, 50);
    ofDrawRectangle(950, 450, 50, 50);
    ofDrawRectangle(950, 500, 50, 50);
    ofDrawRectangle(950, 550, 50, 50);
    ofDrawRectangle(950, 600, 50, 50);
    ofDrawRectangle(950, 650, 50, 50);
    ofDrawRectangle(950, 700, 50, 50);
    ofDrawRectangle(950, 750, 50, 50);
    ofDrawRectangle(950, 800, 50, 50);
    ofDrawRectangle(950, 850, 50, 50);
    ofDrawRectangle(950, 900, 50, 50);
    //maze
    ofDrawRectangle(100, 750, 50, 50);
    ofDrawRectangle(150, 750, 50, 50);
    ofDrawRectangle(200, 750, 50, 50);
    ofDrawRectangle(250, 750, 50, 50);
    ofDrawRectangle(300, 750, 50, 50);
    ofDrawRectangle(100, 850, 50, 50);
    ofDrawRectangle(100, 800, 50, 50);
    ofDrawRectangle(200, 900, 50, 50);
    ofDrawRectangle(200, 850, 50, 50);
    ofDrawRectangle(250, 850, 50, 50);
    ofDrawRectangle(300, 850, 50, 50);
    ofDrawRectangle(350, 750, 50, 50);
    ofDrawRectangle(400, 900, 50, 50);
    ofDrawRectangle(400, 850, 50, 50);
    ofDrawRectangle(400, 800, 50, 50);
    ofDrawRectangle(400, 750, 50, 50);
    ofDrawRectangle(400, 700, 50, 50);
    ofDrawRectangle(400, 650, 50, 50);
    ofDrawRectangle(50, 650, 50, 50);
    ofDrawRectangle(300, 650, 50, 50);
    ofDrawRectangle(100, 650, 50, 50);
    ofDrawRectangle(150, 650, 50, 50);
    ofDrawRectangle(200, 650, 50, 50);
    ofDrawRectangle(250, 650, 50, 50);
    ofDrawRectangle(450, 650, 50, 50);
    ofDrawRectangle(550, 900, 50, 50);
    ofDrawRectangle(550, 850, 50, 50);
    ofDrawRectangle(700, 900, 50, 50);
    ofDrawRectangle(700, 850, 50, 50);
    ofDrawRectangle(700, 800, 50, 50);
    ofDrawRectangle(700, 750, 50, 50);
    ofDrawRectangle(700, 900, 50, 50);
    ofDrawRectangle(500, 850, 50, 50);
    ofDrawRectangle(600, 850, 50, 50);
    ofDrawRectangle(750, 850, 50, 50);
    ofDrawRectangle(800, 850, 50, 50);
    ofDrawRectangle(850, 850, 50, 50);
    ofDrawRectangle(500, 800, 50, 50);
    ofDrawRectangle(500, 750, 50, 50);
    ofDrawRectangle(550, 750, 50, 50);
    ofDrawRectangle(600, 750, 50, 50);
    ofDrawRectangle(550, 700, 50, 50);
    ofDrawRectangle(550, 650, 50, 50);
    ofDrawRectangle(800, 750, 50, 50);
    ofDrawRectangle(850, 750, 50, 50);
    ofDrawRectangle(850, 700, 50, 50);
    ofDrawRectangle(850, 650, 50, 50);
    ofDrawRectangle(800, 650, 50, 50);
    ofDrawRectangle(750, 650, 50, 50);
    ofDrawRectangle(700, 650, 50, 50);
    ofDrawRectangle(650, 650, 50, 50);
    ofDrawRectangle(600, 650, 50, 50);
    ofDrawRectangle(450, 600, 50, 50);
    ofDrawRectangle(450, 550, 50, 50);
    ofDrawRectangle(450, 500, 50, 50);
    ofDrawRectangle(450, 450, 50, 50);
    ofDrawRectangle(750, 600, 50, 50);
    ofDrawRectangle(750, 550, 50, 50);
    ofDrawRectangle(750, 500, 50, 50);
    ofDrawRectangle(100, 550, 50, 50);
    ofDrawRectangle(50, 450, 50, 50);
    ofDrawRectangle(150, 550, 50, 50);
    ofDrawRectangle(200, 550, 50, 50);
    ofDrawRectangle(300, 550, 50, 50);
    ofDrawRectangle(350, 550, 50, 50);
    ofDrawRectangle(450, 550, 50, 50);
    ofDrawRectangle(550, 550, 50, 50);
    ofDrawRectangle(600, 550, 50, 50);
    ofDrawRectangle(650, 550, 50, 50);
    ofDrawRectangle(750, 550, 50, 50);
    ofDrawRectangle(850, 550, 50, 50);
    ofDrawRectangle(900, 550, 50, 50);
    ofDrawRectangle(850, 500, 50, 50);
    ofDrawRectangle(750, 500, 50, 50);
    ofDrawRectangle(700, 500, 50, 50);
    ofDrawRectangle(650, 500, 50, 50);
    ofDrawRectangle(450, 500, 50, 50);
    ofDrawRectangle(300, 500, 50, 50);
    ofDrawRectangle(150, 500, 50, 50);
    ofDrawRectangle(100, 450, 50, 50);
    ofDrawRectangle(150, 450, 50, 50);
    ofDrawRectangle(250, 450, 50, 50);
    ofDrawRectangle(300, 450, 50, 50);
    ofDrawRectangle(400, 450, 50, 50);
    ofDrawRectangle(450, 450, 50, 50);
    ofDrawRectangle(500, 450, 50, 50);
    ofDrawRectangle(550, 450, 50, 50);
    ofDrawRectangle(650, 450, 50, 50);
    ofDrawRectangle(850, 450, 50, 50);
    ofDrawRectangle(850, 400, 50, 50);
    ofDrawRectangle(800, 400, 50, 50);
    ofDrawRectangle(700, 400, 50, 50);
    ofDrawRectangle(650, 400, 50, 50);
    ofDrawRectangle(400, 400, 50, 50);
    ofDrawRectangle(250, 400, 50, 50);
    ofDrawRectangle(100, 400, 50, 50);
    ofDrawRectangle(700, 350, 50, 50);
    ofDrawRectangle(550, 350, 50, 50);
    ofDrawRectangle(450, 350, 50, 50);
    ofDrawRectangle(400, 350, 50, 50);
    ofDrawRectangle(350, 350, 50, 50);
    ofDrawRectangle(250, 350, 50, 50);
    ofDrawRectangle(200, 350, 50, 50);
    ofDrawRectangle(100, 350, 50, 50);
    ofDrawRectangle(700, 250, 50, 50);
    ofDrawRectangle(550, 250, 50, 50);
    ofDrawRectangle(450, 250, 50, 50);
    ofDrawRectangle(400, 250, 50, 50);
    ofDrawRectangle(350, 250, 50, 50);
    ofDrawRectangle(300, 250, 50, 50);
    ofDrawRectangle(250, 250, 50, 50);
    ofDrawRectangle(200, 250, 50, 50);
    ofDrawRectangle(850, 300, 50, 50);
    ofDrawRectangle(800, 300, 50, 50);
    ofDrawRectangle(750, 300, 50, 50);
    ofDrawRectangle(700, 300, 50, 50);
    ofDrawRectangle(600, 300, 50, 50);
    ofDrawRectangle(550, 300, 50, 50);
    ofDrawRectangle(450, 300, 50, 50);
    ofDrawRectangle(200, 300, 50, 50);
    ofDrawRectangle(100, 300, 50, 50);
    ofDrawRectangle(50, 200, 50, 50);
    ofDrawRectangle(100, 200, 50, 50);
    ofDrawRectangle(200, 200, 50, 50);
    ofDrawRectangle(400, 200, 50, 50);
    ofDrawRectangle(550, 200, 50, 50);
    ofDrawRectangle(650, 200, 50, 50);
    ofDrawRectangle(700, 200, 50, 50);
    ofDrawRectangle(800, 200, 50, 50);
    ofDrawRectangle(850, 200, 50, 50);
    ofDrawRectangle(900, 200, 50, 50);
    ofDrawRectangle(100, 150, 50, 50);
    ofDrawRectangle(300, 150, 50, 50);
    ofDrawRectangle(500, 150, 50, 50);
    ofDrawRectangle(550, 150, 50, 50);
    ofDrawRectangle(650, 150, 50, 50);
    ofDrawRectangle(700, 150, 50, 50);
    ofDrawRectangle(850, 150, 50, 50);
    ofDrawRectangle(100, 100, 50, 50);
    ofDrawRectangle(150, 100, 50, 50);
    ofDrawRectangle(250, 100, 50, 50);
    ofDrawRectangle(700, 100, 50, 50);
    ofDrawRectangle(300, 100, 50, 50);
    ofDrawRectangle(350, 100, 50, 50);
    ofDrawRectangle(400, 100, 50, 50);
    ofDrawRectangle(450, 100, 50, 50);
    ofDrawRectangle(500, 100, 50, 50);
    ofDrawRectangle(750, 100, 50, 50);
    ofDrawRectangle(850, 100, 50, 50);
    ofDrawRectangle(600, 50, 50, 50);
    ofDrawRectangle(350, 50, 50, 50);
    
    
    
    
}

int Maze_m1::getWall(int mazex, int mazey) {
    return map[mazey][mazex];
}




