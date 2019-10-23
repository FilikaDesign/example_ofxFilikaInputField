#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	// Load and Init font
	ofTrueTypeFontSettings settings5("DINbek Medium.ttf", 28);
	settings5.antialiased = true;
	settings5.dpi = 72;
	settings5.direction = OF_TTF_LEFT_TO_RIGHT;
	settings5.addRange(ofUnicode::Latin);
	settings5.addRange(ofUnicode::LatinA);
	settings5.addRange(ofUnicode::Latin1Supplement);
	font28.load(settings5);
	
	searchField.monoLineTextInput.setText("");

	// Clear searchfield
	searchField.monoLineTextInput.clear();

	// Search Field Setup
	searchField.setup(&font28, 100, 56, "İSMİNİZİ GİRİN .............");
	ofAddListener(searchField.monoLineTextInput.editingEnded, this, &ofApp::ended);
	ofAddListener(searchField.monoLineTextInput.textChanged, this, &ofApp::KeyPressed);
	ofAddListener(searchField.monoLineTextInput.editingBegan, this, &ofApp::editingBegan);

	inputSrc = "";
}

void ofApp::editingBegan()
{

	virtualKeyboard.startTouchKeyboard();
}

void ofApp::ended() {
	virtualKeyboard.stopTouchKeyboard();
}

void ofApp::KeyPressed(string & a) {
	if (a != "") {
		
	}


	//ofNotifyEvent(VIRTUAL_KEYBOARD_PRESSED);

}
//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	searchField.draw();

	font28.drawString(inputSrc, 100, 100);
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
	inputSrc = searchField.monoLineTextInput.getText();
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
