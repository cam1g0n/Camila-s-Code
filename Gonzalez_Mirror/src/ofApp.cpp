#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    grabber.setup(1280,720);
    grabberPix.allocate(grabber.getWidth(),grabber.getHeight(),OF_PIXELS_RGB);
    ofSetCircleResolution(36);
    

}

//--------------------------------------------------------------
void ofApp::update(){
    grabber.update();
    
    if (grabber.isFrameNew())
    {
        //get the camera pixels
        grabberPix = grabber.getPixels();
        grabberPix.mirror(false, true);
    }
    
    

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(ofColor::fromHsb(302, 16, 100));
    
    //now we can itterate through our pixels
    for (int x = 0; x< grabberPix.getWidth();x+=20)
    {
        for( int y =0; y<grabberPix.getHeight();y+=30)
        {
            ofColor pixelColor = grabberPix.getColor(x,y);
            
            
            
            float brightnessValue = pixelColor.getBrightness();
            float brightness = pixelColor.getBrightness();
            
            ofColor redColor = ofColor::fromHsb((0,10), brightness * 10, brightness);
            
            ofColor::fromHsb(0,brightness,brightness);
            
            brightnessValue = ofMap(brightnessValue, 0, 200, 5, 60);
            
            
            //ofSetColor(pixelColor);
            
            ofSetColor(redColor);
            ofFill();
            ofSetLineWidth(ofRandom(60,200));
            ofDrawLine(x, y, x+(ofRandom(brightnessValue/10)), y+(brightnessValue+10));
            //ofDrawCircle(x,y,brightnessValue);
            
        }
    }
    
    
    

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key == ' ');
    
    for (int x = 0; x< grabberPix.getWidth();x+=35)
    {
        for( int y =0; y<grabberPix.getHeight();y+=35)
        {
            ofColor pixelColor = grabberPix.getColor(x,y);
            float brightnessValue = pixelColor.getBrightness();
            
            brightnessValue = ofMap(brightnessValue, 0, 255, 1, 30);
            
            
            ofSetColor(pixelColor);
            ofFill();
            ofSetLineWidth(ofRandom(1,40));
            ofDrawLine(x, y, x+(brightnessValue/20), y+(brightnessValue+40));
        }
    }

    
    
    
    
    
    
    //    Particle p;
//    p.pos ={ofGetMouseX(),ofGetMouseY(),0};
//    p.vel = {ofRandom(-2,2),ofRandom(-6,2),0};
//    p.accel = {0,.01,0};
//    p.size = {ofRandom(20,6)};
//
//    p.drag = .05;
//    p.color = ofColor::fromHsb(29, 52, 66,150);
//
//    particles.push_back(p);


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
