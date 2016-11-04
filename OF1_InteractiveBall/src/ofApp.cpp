#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    cPos = ofVec2f(ofGetWindowWidth() * 0.5, ofGetWindowHeight() * 0.5);
    cRadius = 30;
    friction = 0.99;
    ofSetBackgroundColor(0, 0, 100);
}

//--------------------------------------------------------------
void ofApp::update(){
    if(velocity.length() > 0){
        velocity *= ofVec2f(friction);
        cPos += velocity;
        cout << cPos << endl;
        if(velocity.length() < MIN_VELOCITY){
            velocity = ofVec2f(0);
        }
        
        cRadius = 30 + velocity.length() * 30;
    }
    
    if(cPos.x > ofGetWindowWidth() - cRadius || cPos.x < cRadius){
        velocity.x *= -1;
    }
    
    if(cPos.y > ofGetWindowHeight() - cRadius || cPos.y < cRadius){
        velocity.y *= -1;
    }
    
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetCircleResolution(50);
    ofSetColor(255,0,0);
    ofDrawCircle(cPos,cRadius);
    
    ofSetColor(255);
    ofDrawBitmapString("x: " + ofToString(cPos.x) + "  y: " + ofToString(cPos.y), cPos + ofVec2f(40, -20) );
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
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
    
    ofVec2f mousePos = ofVec2f(x,y);
    
    accel = cPos - mousePos;
    accel = accel.getNormalized();
    
    cout << "accel: " << accel << endl;
    
    velocity += accel;
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
