#pragma once

#include "ofMain.h"

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
    
    // CHALLENGE: Use sin / cos to emulate a natural phenomenon. Post a picture or video of what your phenomenon is along with you application.
    float amplitudeY;
    ofPoint pos;
    int posVel;
    ofColor background;
    float rad;
    float angle, angleVel;
    
};
