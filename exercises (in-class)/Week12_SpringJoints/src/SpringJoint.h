//
//  SpringJoint.h
//  Week12_SpringJoints
//
//  Created by J. Matthew Griffis on 11/12/13.
//
//

#pragma once

#include "ofMain.h"

class SpringJoint {
public:
    void update();
    void draw();
    void applyForce( ofVec2f force );
    
    ofVec2f pos, vel, acc;
};