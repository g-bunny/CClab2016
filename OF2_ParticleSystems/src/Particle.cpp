//
//  Particle.cpp
//  OF1_InteractiveBall
//  CCLab 2016
//
//  Created by Miri Park on 11/3/16.
//
//

#include "Particle.hpp"

Particle::Particle(ofVec2f pos){
    myPos = pos;
    myVel = ofVec2f(ofRandom(-2.0f, 2.f), ofRandom(-2.0f, 2.0f));
    myAccel = ofVec2f(0);
    myLifeSpan = INITIAL_LIFE_SPAN;
}

void Particle::applyForce(ofVec2f force){
    myAccel = force;
}
void Particle::update(float multiplier){
    myVel += myAccel;
    myPos += myVel * multiplier;
    
    if(myLifeSpan > 0){
        myLifeSpan -= 1.0f;
    }
    
}
void Particle::draw(){
    
    if(myLifeSpan > 100){
        ofSetColor(255);
    } else {
        ofSetColor(ofRandom(0,(myLifeSpan/INITIAL_LIFE_SPAN) * 255),ofRandom(0,(myLifeSpan/INITIAL_LIFE_SPAN) * 255),ofRandom(0,(myLifeSpan/INITIAL_LIFE_SPAN) * 255));
    }
    
    ofDrawCircle(myPos, ofMap(myLifeSpan,0,120,0,5));
    
}
