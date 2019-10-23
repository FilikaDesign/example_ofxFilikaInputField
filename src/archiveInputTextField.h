#pragma once
#include "ofMain.h"
#include "ofxUIUtils.h"

class archiveInputTextField {
private:
	int x, y;
	string inPlaceHolder;
	ofImage inBgInput;
	

	
public:
	//	Text Fields 
	ofxTextInputField monoLineTextInput;

	void disableInteraction() {

	}

	void enableInteraction() {


	}
	void setup(ofTrueTypeFont * _regular28, int _x, int _y, string _inPlaceHolder) {
		inPlaceHolder = _inPlaceHolder;
		x			  = _x;
		y			  = _y;

		// Load bg image
		inBgInput.load("search.png");

		monoLineTextInput.setup();
		monoLineTextInput.setPlaceholderText(inPlaceHolder);
		monoLineTextInput.setBounds(x + 56, y - 4, 240, 40);
		monoLineTextInput.setFont(*_regular28);
		monoLineTextInput.setBackgroundColor(ofColor(0, 0, 0, 0));
	}

	void draw() {
		ofPushStyle();
		ofEnableAlphaBlending();
		ofSetColor(255,255);
		inBgInput.draw(x,y);
		monoLineTextInput.draw();
		ofPopStyle();
	}
};