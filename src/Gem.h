//
//  Gem.h
//  Game310
//
//  Created by Esteban Montesinos on 12/11/18.
//

#ifndef Gem_h
#define Gem_h
#include "ofMain.h"
#include "Points.h"
class Gem: public Points{
public:
    virtual void setpoints(int p);
    Gem (int x, int y,int size,int points);
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
    ofImage gemP;
    int x, y,size,points,p;
    
    
};



#endif /* Gem_h */

