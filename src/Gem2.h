//
//  Gem2.h
//  Game310
//
//  Created by Esteban Montesinos on 12/12/18.
//

#ifndef Gem2_h
#define Gem2_h
#include "ofMain.h"
#include "Points.h"
class Gem2: public Points{
public:
    virtual void setpoints(int p);
    Gem2 (int x, int y,int size,int points);
    void update();
    void draw();
    int getX();
    int getY();
    void setX(int x);
    void setY(int y);
    // void setDx(int dx);
    // void setDy(int dy);
    // int getDx();
    // int getDy();
    int getSize();
    void keyPressed(int key);
    ofImage gemP2;
    int x, y,size,points,p;
    
};
#endif /* Gem2_h */
