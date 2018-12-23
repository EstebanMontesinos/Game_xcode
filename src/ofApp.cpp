#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    serial.listDevices();
    ofSetBackgroundColor(255, 255, 255);
    bg=new background;
    johns=new Johns(50);
    maze = new Maze_m1;
    wSound.load("w.mp3");
    pSound.load("Pacman.mp3");
    shoot.load("gunshot.mp3");
    myfont.load("Playfair.otf", 30);
    scream = new Scream(50, 600, 5, 0);
    scream2 = new Scream(900, 250, 5, 1);
    gem1 = new Gem(500, 900, 25, 0);
    gem2 = new Gem2(100, 700, 25, 0);
    can = new MagicD(250, 300, 25);
    exit = new exitS(690, 850, 25);
    mazex = 0;
    mazey = 18;
    g1 = false;
    g2 = false;
    c = false;
    pSound.play();
    pSound.setLoop(true);
    look = false;
    ofSetFrameRate(50);
    
    
    output.open("scores.txt", ofstream::out);
    if (!output.is_open()) {
        cerr << "File could not open\n";
    }
    
    input.open("scores.txt", ifstream::in);
    if (!input.is_open()) {
        cerr << "File could not open\n";
    }
    bool ok = serial.setup("COM3", 9600);
    
    if(ok){
        cout<<"Serial is ok\n";
        
    }
    else{
        cout<<"Unable to open serial port\n";
    }
    
    
    
    
}

//--------------------------------------------------------------
void ofApp::update(){
    scream->update();
    scream2->update();
    johns->update();
    if (johns->getX() / 50 == 12 && johns->getY() / 50 == 19 && look == false ) {
        output << johns->lifes <<" "<< gem1->points <<" "<<  gem2->points << endl;
        input >> l >> s1 >> s2;
        look = true;
    }
    if (johns->lifes == 0 && look == false) {
        output<<johns->lifes << " "<< gem1->points << " "<<gem2->points << endl;
        input >> l >> s1 >> s2;
        look = true;
    }
    if (johns->getX()/50  == scream2->getX()/50 && johns->getY()/50  == scream2->getY()/50 ) {
        if (scream2->getshot() == false) {
            johns->reset();
            mazex = 0;
            mazey = 18;
        }
    }
    if (johns->getX() / 50 == scream->getX() / 50 && johns->getY() / 50 == scream->getY() / 50) {
        if (scream->getshot() == false) {
            johns->reset();
            mazex = 0;
            mazey = 18;
        }
    }
    if (johns->getX() / 50== gem1->getX() / 50 && johns->getY() / 50 == gem1->getY() / 50) {
        if (g1 == false) {
            gem1->points++;
        }
        g1 = true;
    }
    if (johns->getX() / 50 == gem2->getX() / 50 && johns->getY() / 50 == gem2->getY() / 50) {
        if (g2 == false) {
            gem2->points++;
        }
        g2 = true;
    }
    if (johns->getX() / 50 == can->getX() / 50 && johns->getY() / 50 == can->getY() / 50) {
        if (c == false) {
            johns->lifes++;
        }
        c = true;
    }
    for (int i = 0; i < fireballs.size(); i++) {
        fireballs[i]->update();
    }
    for (int i = 0; i < fireballs.size(); i++) {
        if (fireballs[i]->getdirection() == 0 || fireballs[i]->getdirection() == 2) {
            if (maze->getWall((fireballs[i]->getX() - 50) / 50, (fireballs[i]->getY()) / 50) == 1 || maze->getWall(fireballs[i]->getX() / 50, fireballs[i]->getY() / 50) == 1) {
                fireballs.erase(fireballs.begin() + i);
                
            }
        }
        else if (fireballs[i]->getdirection() == 1 || fireballs[i]->getdirection() == 3) {
            if (maze->getWall((fireballs[i]->getX() ) / 50, fireballs[i]->getY() / 50) == 1 || maze->getWall(fireballs[i]->getX() / 50, fireballs[i]->getY() / 50) == 1) {
                fireballs.erase(fireballs.begin() + i);
                
            }
        }
    }
    for (int i = 0; i < fireballs.size(); i++) {
        if (fireballs[i]->getX() / 50 == scream->getX() / 50 && fireballs[i]->getY() / 50 == scream->getY() / 50) {
            scream->shot = true;
        }
        for (int i = 0; i < fireballs.size(); i++) {
            if (fireballs[i]->getX() / 50 == scream2->getX() / 50 && fireballs[i]->getY() / 50 == scream2->getY() / 50) {
                scream2->shot = true;
            }
        }
    }
    
    
    
    char c;
    if(serial.available()){
        c = serial.readByte();
        
        if(c=='L'){
            int move = mazex - 1;
            int walll = maze->getWall(move, mazey);
            if (walll == 0) {
                johns->x -= 50;
                mazex--;
                
                
            }
        }
        
        if(c=='R'){
            int move = mazex + 1;
            int wallr = maze->getWall(move, mazey);
            if (wallr == 0) {
                johns->x += 50;
                mazex++;
                
                
            }
        }
        if(c=='U'){
            int move = mazey - 1;
            int wallu = maze->getWall(mazex, move);
            
            if (wallu == 0) {
                johns->y -= 50;
                mazey--;
                
                
            }
        }
        if(c=='D'){
            int move = mazey + 1;
            int walld = maze->getWall(mazex, move);
            
            if (walld == 0) {
                johns->y += 50;
                mazey++;
                
                
            }
        }
        
        if (c == 'A') {
            if(johns->lifes==0 || (johns->getX() / 50 == 12 && johns->getY() / 50 == 19)){
                look = false;
                setup();
                
            }
            else{
                fireballs.push_back(new Fireball(5, johns->getX(), johns->getY(), 3, 2));//left
                shoot.play();
            }
        }
        if (c == 'X') {
            fireballs.push_back(new Fireball(5, johns->getX(), johns->getY(), 3, 3));//up
            shoot.play();
        }
        if (c == 'B') {
            fireballs.push_back(new Fireball(5, johns->getX(), johns->getY(), 3, 1));//down
            shoot.play();
        }
        if (c == 'Y') {
            fireballs.push_back(new Fireball(5, johns->getX(), johns->getY(), 3, 0));//rigt
            shoot.play();
        }
        std::cout << c << endl;
        
        
        
    }
}




//--------------------------------------------------------------
void ofApp::draw(){
    bg->draw();
    maze->draw();
    johns->draw();
    if (scream->getshot() == false) {
        scream->draw();
    }
    if (scream2->getshot() == false) {
        scream2->draw();
    }
    if (g1 == false) {
        gem1->draw();
    }
    if (g2 == false) {
        gem2->draw();
    }
    if (c == false) {
        can->draw();
    }
    for (int i = 0; i < fireballs.size(); i++) {
        fireballs[i]->draw();
    }
    exit->draw();
    myfont.drawString("Lifes: " + ofToString(johns->lifes), 50, 35);
    myfont.drawString("RGems: " + ofToString(gem1->points), 400, 35);
    myfont.drawString("YGems: " + ofToString(gem2->points), 760, 35);
    if(johns->lifes==0){
        ofSetColor(0);
        ofDrawRectangle(0, 0, 1000, 1000);
        ofSetColor(0,191,255);
        myfont.drawString("GAME OVER! The ghosts drained your soul ", 60, 300);
        myfont.drawString("Lives: "+ l + "   Red Gems: " + s1 + "   Yellow Gems: "+ s2, 60, 400);
    }
    if (johns->getX()/50 == 12 && johns->getY()/50 == 19) {
        ofSetColor(0);
        ofDrawRectangle(0, 0, 1000, 1000);
        ofSetColor(0, 191, 255);
        myfont.drawString("You Won! you solved the maze and evaded the ghosts! ", 60, 300);
        //    output << "Score: Lifes: " << johns->lifes << "gold gems: " << gem1->points << "blue gems" << gem2->points << endl;
        //    input >> s;
        myfont.drawString("Lives: " + l + "   Red Gems: " + s1 + "   Yellow Gems: " + s2, 60, 400);
    }
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    johns->keyPressed(key);
    if(key==57357){
        int move = mazey - 1;
        int wallu = maze->getWall(mazex, move);
        
        if (wallu == 0) {
            johns->y -= 50;
            mazey--;
            
            if (!wSound.isPlaying()) {
                wSound.play();
                wSound.setLoop(true);
            }
        }
    }
    cout<<key;
    if(key==57359){
        if (johns->lifes == 0 || (johns->getX() / 50 == 12 && johns->getY() / 50 == 19)) {
            look = false;
            setup();
            
        }
        else {
            int move = mazey + 1;
            int walld = maze->getWall(mazex, move);
            
            if (walld == 0) {
                johns->y += 50;
                mazey++;
                
                if (!wSound.isPlaying()) {
                    wSound.play();
                    wSound.setLoop(true);
                }
            }
        }
    }
    if(key==57358){
        int move = mazex + 1;
        int wallr = maze->getWall(move, mazey);
        if (wallr == 0) {
            johns->x += 50;
            mazex++;
            
            if (!wSound.isPlaying()) {
                wSound.play();
                wSound.setLoop(true);
            }
        }
    }
    if(key==57356){
        int move = mazex - 1;
        int walll = maze->getWall(move, mazey);
        if (walll == 0) {
            johns->x -= 50;
            mazex--;
            
            if (!wSound.isPlaying()) {
                wSound.play();
                wSound.setLoop(true);
                wSound.setSpeed(1.0);
            }
        }
        
    }
    if (key == 32) {
        fireballs.push_back(new Fireball(5, johns->getX(), johns->getY(), 3, 0));
        shoot.play();
    }
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    if(key==57357){
        wSound.stop();
    }
    if(key==57359){
        wSound.stop();
    }
    if(key==57358){
        wSound.stop();
    }
    if(key==57356){
        wSound.stop();
    }
    
    
    
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){
    
}


