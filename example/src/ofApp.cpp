#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    mixedFont = std::make_shared<ofxMixedFont>();

    yourFont = std::make_shared<ofxFT2Font>("your_font.ttf", 64);
    emojiFont = std::make_shared<ofxFT2Font>("Apple Color Emoji.ttc", 64);

    mixedFont->add(yourFont);
    mixedFont->add(emojiFont);
//    mixedFont->add(std::make_shared<ofxFT2Font>("barfoo_font.otf", 64));
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
//    auto func = [&](const ofxBaseFontPtr &font, const ofPoint &point, ofxGlyphDataList &glyph_list) {
//      ofPoint pos = point;
//      for (auto &glyph : glyph_list) {
//        glyph.coord = pos;
//
//        if (glyph.props.code_point == U"\n") {
//            pos.x = point.x;
//            pos.y += font->getFontProps().line_height;
//        }
//        else if (glyph.props.code_point == U" ") {
//            pos.x += font->getFontProps().x_ppem / 2.f;
//        }
//        else if (glyph.props.code_point == U"　") {
//            pos.x += font->getFontProps().x_ppem;
//        }
//        else {
//            pos.x += glyph.props.advance;
//        }
//      }
//    };
    ofPushMatrix();
    ofTranslate(100,100);
    ofScale(0.5);
    mixedFont->drawString("こんにちは🙂🥺", ofPoint(0, 0));
    ofPopMatrix();
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
