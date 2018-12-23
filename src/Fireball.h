//
//  Fireball.h
//  Game310
//
//  Created by Esteban Montesinos on 12/6/18.
//

#ifndef Fireball_h
#define Fireball_h
#include "ofMain.h"

class Fireball{
public:
    Fireball(int size,int x,int y,int speed,int direction);
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
    int getdirection();
    int x, y, size,speed,direction;
    
    
};
#endif /* Fireball_h */

