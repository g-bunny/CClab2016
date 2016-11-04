//
//  ParticleSystem.hpp
//  OF1_InteractiveBall
//  CCLab 2016
//
//  Created by Miri Park on 11/3/16.
//
//

#pragma once
#include "ofMain.h"
#include "Particle.hpp"

class ParticleSystem{
public:
    ParticleSystem(ofVec2f pos);
    void update(ofVec2f force);
    void draw();
    
    vector<Particle> particleList;
    ofVec2f myPos;
    int emitRate;
    const int SIZE_LIMIT = 500;
    
    
};
