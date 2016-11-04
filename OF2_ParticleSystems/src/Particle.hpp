//
//  Particle.hpp
//  OF1_InteractiveBall
//  CCLab 2016
//
//  Created by Miri Park on 11/3/16.
//
//

#pragma once
#include "ofMain.h"

class Particle{
public:
    Particle(ofVec2f pos);
    
    void applyForce(ofVec2f force);
    void update(float multiplier);
    void draw();
    
    ofVec2f myPos, myVel, myAccel;
    float myLifeSpan;
    const float INITIAL_LIFE_SPAN = 120.0f;
};
