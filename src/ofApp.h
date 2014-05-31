#pragma once

#include "ofMain.h"
#include "ofxGameCamera.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
        ofVideoPlayer player;

        ofImage image;
    
        ofShader shader;
        ofShader shader2;
    
        ofSpherePrimitive sphere;
        ofSpherePrimitive sphere2;
    
        bool useImage;
        bool useClouds;
    
        ofEasyCam cam;
		
};
