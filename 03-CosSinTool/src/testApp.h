#pragma once

#include "ofMain.h"

//  Refences:
//
//                  http://en.wikipedia.org/wiki/Sine_wave
//                  http://en.wikipedia.org/wiki/Waveform
//                  http://video.mit.edu/watch/the-sounds-of-music-9042/

class testApp : public ofBaseApp{
public:
    void setup();
    void update();
    void draw();

    void keyPressed  (int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);

    void drawDot(ofPoint _pos);

    vector<float> sinHistory;

    ofPoint center;
    ofPoint dotPos;

    float   angle;
    float   radius;

    bool    bPlay;
};
