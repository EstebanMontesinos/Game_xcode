//
//  MagicD.h
//  Game310
//
//  Created by Esteban Montesinos on 12/12/18.
//

#ifndef MagicD_h
#define MagicD_h
#include "ofMain.h"
class MagicD{
public:
    MagicD(int x, int y,int size);
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
    ofImage drinkP;
    int x, y,size,points;
    
};
#endif /* Gem2_h */
