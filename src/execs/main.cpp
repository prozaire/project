#include <iostream>
#include <glad/glad.h>
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <map>

#define WINDOW_WIDTH 800
#define WINDOW_HEIGHT 800

int main(void)
{
    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))   
    {
        std::cout << "Failed to initialize GLAD" << std::endl;
        return -1;
    }    

    GLFWwindow* window;

    /* Initialize the library */
    if (!glfwInit())
        return -1;

    /* Create a windowed mode window and its OpenGL context */
    window = glfwCreateWindow(600, 600, "Alo et Clo lpbs", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    /* Make the window's context current */
    glfwMakeContextCurrent(window);

    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window))
    {
        /* Render here */
        glClear(GL_COLOR_BUFFER_BIT);

        /* Swap front and back buffers */
        glfwSwapBuffers(window);

        /* Poll for and process events */
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}