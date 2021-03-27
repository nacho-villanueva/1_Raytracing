
#include "Renderer.h"
#include <iostream>

Renderer::Renderer(int width, int height) : width(width), height(height) {
    // INIT GLFW
    if (!glfwInit()) {
        std::cerr << "Error initializing GLFW." << std::endl;
        throw;
    }

    window = glfwCreateWindow(width, height, "Raytracer", nullptr, nullptr);
    if (!window)
    {
        std::cerr << "Error creating window." << std::endl;
        glfwTerminate();
        throw;
    }

    glfwMakeContextCurrent(window);

    pixels = new unsigned char[width * height * 3];
}

void Renderer::Render() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glDrawPixels(width, height, GL_RGB, GL_UNSIGNED_BYTE, pixels);
    glfwSwapBuffers(window);
}

void Renderer::SetPixel(unsigned int x, unsigned int y, const Color color) {
    pixels[y * width * 3 + x * 3    ] = color.r;
    pixels[y * width * 3 + x * 3 + 1] = color.g;
    pixels[y * width * 3 + x * 3 + 2] = color.b;
}

void Renderer::SleepUntilClosed() {
    while (!glfwWindowShouldClose(window)){
        glfwPollEvents();
    }

}

Renderer::~Renderer() {
    delete[] pixels;
    glfwDestroyWindow(window);
}
