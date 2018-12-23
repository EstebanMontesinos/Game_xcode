//
//  exitS.h
//  Game310
//
//  Created by Esteban Montesinos on 12/13/18.
//

#ifndef exitS_h
#define exitS_h
#include "ofMain.h"
class exitS{
public:
    exitS(int x, int y,int size);
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
    ofImage sign;
    int x, y,size,points;
    
};
#endif /* Gem2_h */

