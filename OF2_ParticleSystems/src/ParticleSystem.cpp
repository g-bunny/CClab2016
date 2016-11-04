//
//  ParticleSystem.cpp
//  OF1_InteractiveBall
//  CCLab 2016
//
//  Created by Miri Park on 11/3/16.
//
//

#include "ParticleSystem.hpp"

ParticleSystem::ParticleSystem(ofVec2f pos){
    myPos = pos;
    emitRate = 10;
}

void ParticleSystem::update(ofVec2f force){
    if(particleList.size() < SIZE_LIMIT){
        for(int i = 0; i < emitRate; i++){
            Particle myParticle(myPos);
            particleList.push_back(myParticle);
        }
    }
    
    for (int i=0; i < particleList.size(); i++){
        particleList[i].applyForce(force);
        
        float distance = (particleList[i].myPos - myPos).length();
        float velMultiplier = ofMap(distance, 0, 200, 4, 0);
        particleList[i].update(velMultiplier);
    }
    
}
void ParticleSystem::draw(){
    for(int i = 0; i < particleList.size(); i++){
        particleList[i].draw();
    }
}
