//
//  Johns.h
//  Game310
//
//  Created by Esteban Montesinos on 11/27/18.
//

#ifndef Johns_h
#define Johns_h
#include "ofMain.h"
#include "Fireball.h"
#include "Maze_m1.h"

#include <vector>
class Johns{
public:
    Johns(int size);
    void update();
    void draw();
    int getX();
    int getY();
    void setX(int x);
    void setY(int y);
    void reset();
    // void setDx(int dx);
    // void setDy(int dy);
    // int getDx();
    // int getDy();
    int getSize();
    void keyPressed(int key);
    ofImage johns;
    
    Maze_m1 * maze;
    int x, y, lifes;
    
    //ofSerial serial;
private:
    int size,direction,speed,dx,dy;
    
};


#endif /* Johns_h */

