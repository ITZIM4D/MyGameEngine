#ifndef WINDOW_H
#define WINDOW_H

#ifdef __APPLE__
#define GL_SILENCE_DEPRECATION
#endif

#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <iostream>

class Window {
    public:
        /**
         * @brief Creates a window and context
         */
        Window(int width, int height);

        /**
         * @brief returns pointer to window
         */
        GLFWwindow* getWindow();

    private:
        // Variables
        GLFWwindow* window;

        /**
         * @brief callback when window changes size
         */
        static void framebuffer_size_callback(GLFWwindow* window, int width, int height);
    
};

#endif