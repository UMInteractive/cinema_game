//
//  player.cpp
//  example-Simple
//
//  Created by Clay Ewing on 2/8/14.
//
//

#include "player.h"

void Player::setupCustom(int id) {
    setData(new CustomData());
    CustomData * theData = (CustomData *)getData();
    theData->type = PLAYER_TYPE;
    theData->remove = false;
    theData->id = id;
    score = 0;
}
void Player::display() {
    float width = getWidth();
    float height = getHeight();
    ofPushMatrix();
    ofSetRectMode(OF_RECTMODE_CENTER);
    ofTranslate(getPosition());
    ofRotateZ(getRotation());
    ofSetColor(color);
    ofFill();
    image->draw(0, 0, width, height);
    ofSetRectMode(OF_RECTMODE_CORNER);
    ofPopMatrix();
    
}

void Player::resetScore() {
    score = 0;
}