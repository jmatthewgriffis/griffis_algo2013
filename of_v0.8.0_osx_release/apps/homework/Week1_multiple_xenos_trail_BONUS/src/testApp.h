#pragma once

#include "ofMain.h"

#include "rectangle.h"

class testApp : public ofBaseApp{
    
public:
    void setup();
    void update();
    void draw();
    
    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    
    //    CHALLENGE: make a series of xeno objects which follow the mouse, each at different rates. give them slightly different colors so that you can perceive them as independent objects. you will have to modify the rectangle object so that they can have unique colors.
    
    void makeNewRect(); // A custom function to generate a rect.
    
    vector<Rectangle> myRects;
    int numInitRects; // Start with this many.
    int angle; // Use for trig. rotation.
    int rectTimer; // Use to generate new rects.
    int rectRate; // How often to make a new rect.
    float rad; // The radius of rotation.
    float radRate; // How quickly to increase the radius.
    
};
