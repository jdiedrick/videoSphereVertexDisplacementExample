#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0, 0, 0);
    player.loadMovie("kill_la_kill.mp4");
    player.play();
    
    //load shaders
    shader.load("shaders/shader.vert", "shaders/shader.frag");
    
    //setup sphere
    sphere.set(500, 50);
    sphere.mapTexCoordsFromTexture(player.getTextureReference());

}

//--------------------------------------------------------------
void ofApp::update(){
    player.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    sphere.setPosition(ofGetWidth()/2, ofGetHeight()/2, 0);
    sphere.rotate(1, 1.0, 0.0, 0.0);
    sphere.rotate(1, 0, 1.0, 0.0);
    
    shader.begin();
    shader.setUniformTexture("tex0", player.getTextureReference(), 0);
    sphere.draw();
    shader.end();
    
    //player.draw(0,0);
    
    /*
    shader.begin();
    shader.setUniformTexture("tex0", player.getTextureReference(), 0);
    ofEnableNormalizedTexCoords();
    //player.getTextureReference().bind();
    //ofDrawSphere(ofGetWidth()/2, ofGetHeight()/2, 100);
    //player.getTextureReference().unbind();
    ofDisableNormalizedTexCoords();
    shader.end();
     */
    
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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
