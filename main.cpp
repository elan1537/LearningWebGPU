#include <iostream>
#include <GLFW/glfw3.h>

int main(int, char **)
{
    glfwInit();
    if (!glfwInit())
    {
        std::cerr << "Could not initialize GLFW!" << std::endl;
        return 1;
    }

    // Use the window
    GLFWwindow *window = glfwCreateWindow(640, 480, "Learn WebGPU", NULL, NULL);
    if (!window)
    {
        std::cerr << "Could not open window!" << std::endl;
        glfwTerminate();
        return 1;
    }

    while (!glfwWindowShouldClose(window))
    {
        glfwPollEvents();
    }

    // At the end of the program, destory the window
    glfwDestroyWindow(window);
}