#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    gravity = ofVec2f(0.f, 0.02f);
    ofBackground(0);
}

//--------------------------------------------------------------
void ofApp::update(){
    for(int i = 0; i < mySystems.size(); i++){
        mySystems[i].update(gravity);
        
    }
    //    for(int i = 0; i < 500; i++){
    //        if(mySystems.size() > 2){
    //            mySystems[0].particleList[i].myLifeSpan = 120;
    //        }
    //    }
    
    cout << mySystems.size() << endl;
}

//--------------------------------------------------------------
void ofApp::draw(){
    for(int i = 0; i < mySystems.size(); i++){
        mySystems[i].draw();
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if(key = 'c'){
        mySystems.clear();
    }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
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
    // if we click and release, generate a particle system at pos x, y
    ParticleSystem mySystem(ofVec2f(x,y));
    mySystems.push_back(mySystem);
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
