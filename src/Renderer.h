
#ifndef INC_1_RAYTRACING_RENDERER_H
#define INC_1_RAYTRACING_RENDERER_H


#include <GL/glew.h> /* IMPORTANT! glew must be imported BEFORE glfw*/
#include <GLFW/glfw3.h>
#include "Utilities/Color.h"

class Renderer {
public:
    Renderer(int width, int height);
    ~Renderer();

    void SetPixel(unsigned int x, unsigned int y, Color color);

    void Render();

    void SleepUntilClosed();

private:
    unsigned char * pixels;
    int width, height;
    GLFWwindow* window;

};


#endif //INC_1_RAYTRACING_RENDERER_H
