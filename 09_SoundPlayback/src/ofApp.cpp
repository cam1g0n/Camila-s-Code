#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    sound1.load("Ni ");
    sound2.load("Jack.mp3");
    
    
    sound1.play();
    sound2.play();
    
    sound1.setLoop(true);
    sound2.setLoop(true);
    
    sound1.setVolume(0.7);
    
    sound2.setVolume(0.7);
    
    sound1.setPan(-1);
    sound2.setPan(1);
    
    

}

//--------------------------------------------------------------
void ofApp::update(){
    //updates sound Engine
    ofSoundUpdate();
    
    //lets use ofNoise to set pitch values use sin to set vol
    
    float time = ofGetElapsedTimef();
    float noiseMag = ofMap(ofGetMouseX(),0, ofGetWidth(), 0.0, 10.0);
    float sinMag = ofMap(ofGetMouseX(),0, ofGetHeight(), 0.0, 10.0 );
    
    
    pitch1 = ofNoise(time *2.0* noiseMag) * 4-2;
    
    vol1 = sin(time*0.2* sinMag)*0.5+0.5;
    
    
    sound1.setSpeed(pitch1);
    sound1.setVolume(vol1);
    

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    float xpos1= ofMap(pitch1,-2.0,2.0,0.0,ofGetWidth());
    
    float ypos1 = ofMap(vol1, 0.0, 1.0, 0.0, ofGetHeight());
    
    ofBackground(25);

    if(sound1.getPosition()<0.1)
    {
        ofSetColor(255, 255, 0);
        
    }
    else
    {
        ofSetColor(255, 0, 100);
    }
    ofFill();
    ofDrawCircle(xpos1, ypos1, 50);
    
    
    if(sound2.getPosition()<0.1)
    {
        ofSetColor(255, 255, 0);
        
    }
    else
    {
        ofSetColor(255, 0, 100);
    }
    ofFill();
    ofDrawCircle(xpos1-100, ypos1, 50);
    
    
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
