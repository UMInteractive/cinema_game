//
//  pod.h
//  atlantis
//
//  Created by Clay Ewing on 4/7/14.
//
//

#include "ofMain.h"
#include "ofxBox2dRect.h"
#include "custom.h"

class Pod : public ofxBox2dRect {
    
public:
    void display();
    void setupCustom(int id);
    void init();
    ofColor color;
    ofImage *image;
    
};