#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    //bools
    useImage = false;
    useClouds = true;
    
    ofBackground(0, 0, 0);
    
    //load video
    player.loadMovie("kill_la_kill.mp4");
    player.play();
    player.setVolume(1.0);
    
    //load image
    image.loadImage("miku.jpeg");
    
    //setup sphere
    sphere.set(20, 200);
    
    
    //load shaders
    if(useClouds) shader.load("shaders/clouds");
    if(!useClouds) shader.load("shaders/shader.vert", "shaders/shader.frag");
    
    
    if(useImage) sphere.mapTexCoordsFromTexture(image.getTextureReference());
    if(!useImage) sphere.mapTexCoordsFromTexture(player.getTextureReference());

    //cam.setup();
    
    sphere2.set(20, 200);
    shader2.load("shaders/shader");
    sphere2.mapTexCoordsFromTexture(player.getTextureReference());


}

//--------------------------------------------------------------
void ofApp::update(){
    player.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    //cam.begin();
    sphere.setPosition((ofGetWidth()/2)-25, ofGetHeight()/2, 400); //change z index
    sphere.rotate(1, 1.0, 0.0, 0.0);
    sphere.rotate(1, 0, 1.0, 0.0);
    
    shader.begin();
    if(useImage) shader.setUniformTexture("tex0", image.getTextureReference(), 0);
    if(!useImage) shader.setUniformTexture("tex0", player.getTextureReference(), 0);

    sphere.draw();
    shader.end();
    
    
    //cam.begin();
    sphere2.setPosition((ofGetWidth()/2)+25, ofGetHeight()/2, 400); //change z index
    sphere2.rotate(1, 1.0, 0.0, 0.0);
    sphere2.rotate(1, 0, 1.0, 0.0);
    
    shader2.begin();
    shader2.setUniformTexture("tex0", player.getTextureReference(), 0);
    
    sphere2.draw();
    shader2.end();
    
    
    //cam.end();
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
