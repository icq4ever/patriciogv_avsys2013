#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    ofSetVerticalSync(true);
    ofEnableAlphaBlending();
    ofEnableSmoothing();
    ofSetCircleResolution(60);
    ofSetDrawBitmapMode(OF_BITMAPMODE_SIMPLE );
    
    phi = (1.0+sqrtf(5.0))/2.0;
    cout << "This is fye the Greater "<< phi << endl;
    cout << "This is fee the Lesser "<< 1.0/phi << endl;

}

//--------------------------------------------------------------
void testApp::update(){
    ofSetWindowTitle(ofToString(ofGetFrameRate()));
}

//--------------------------------------------------------------
void testApp::draw(){
    ofBackgroundGradient(ofColor::gray, ofColor::black);
    
    ofNoFill();
    ofSetColor(255);
    
    ofPushMatrix();
    ofTranslate(ofGetWidth()*0.5, ofGetHeight()*0.5);
    
    for(int i = 0; i < ofGetFrameNum() && i < 1000; i++ ){
        float angle = phi*TWO_PI*i;
        float radio = i * (1.0/phi);
        float size = sqrt(i);
        
        float x = radio * cos(angle);
        float y = radio * sin(angle);
        
        ofPushMatrix();
        ofTranslate(x, y);
        ofRotate( ofRadToDeg(angle+PI*0.5), 0, 0, 1.0);
        
        ofSetCircleResolution(3+ofGetElapsedTimef()*0.1f);
        ofCircle(0, 0, size*0.75);

        ofPopMatrix();
        
    }
    
    ofPopMatrix();
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
    if (key == 'f'){
        ofToggleFullscreen();
    }

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){
}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}