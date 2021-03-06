#pragma once

#include "ofMain.h"
#include "aShape.h"

#ifndef _TEST_APP
#define _TEST_APP

#define size 5

class testApp : public ofBaseApp{
	
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
	
	ofEasyCam cam; // add mouse controls for camera movement
	
	float rotX;
    float rotY;
	
	float camPos;
	
	// multiples shapes
	aShape* p[size];
	
	
	// ajust translation center but can complicate with the vertex. check this out.
	float centerX;
	float centerY;
	
	float scale;
	
	
};


#endif
