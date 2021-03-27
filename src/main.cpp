#include <iostream>
#include "Renderer.h"

#define WINDOW_WIDTH 1280
#define WINDOW_HEIGHT 720

int main() {

    Renderer renderer(WINDOW_WIDTH, WINDOW_HEIGHT);

    for(int y = 0; y < WINDOW_HEIGHT; y++){
        for(int x = 0; x < WINDOW_WIDTH; x++){
            auto xx = float(x) / float(WINDOW_WIDTH);
            auto yy = float(y) / float(WINDOW_HEIGHT);
            Color c( (unsigned char)(xx*256), (unsigned char)(yy*256), 128);
            renderer.SetPixel(x, y, c);
        }
    }

    renderer.Render();
    renderer.SleepUntilClosed();


    return 0;
}
