//
//  Scream.h
//  Game310
//
//  Created by Esteban Montesinos on 11/27/18.
//

#ifndef Scream_h
#define Scream_h
#include "ofMain.h"
#include "Maze_m1.h"

class Scream {
public:
    Scream(int x, int y, int speed, int direction);
    void update();
    void draw();
    int getX();
    int getY();
    void setX(int x);
    void setY(int y);
    void setDx(int dx);
    void setDy(int dy);
    int getDx();
    int getDy();
    int getSize();
    ofImage scream;
    Maze_m1 * maze;
    int x, y, size, speed, direction;
    bool shot;
    bool getshot();
};


#endif /* Johns_h */
