#include <iostream>
#include <gl/GL.h>
#include <gl/GLU.h>
#include <GLFW/glfw3.h>


int main()
{
    std::cout << "Hello Dune!\n";
    if (!glfwInit()) { // initialise glfw
        fprintf(stderr, "Failed to initialise glfw\n");
        return -1;
    }
    glfwWindowHint(GLFW_SAMPLES, 4); // 4x antialiasing
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3); // We want OpenGL 3.3
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE); // To make MacOS happy; should not be needed
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE); // We don't want the old OpenGL 

    // Open a window and create its OpenGL context
    GLFWwindow* window; // (In the accompanying source code, this variable is global for simplicity)
    window = glfwCreateWindow(1200, 800, "Dune example", NULL, NULL);
    if (window == NULL) {
        fprintf(stderr, "Dune exception\n");
        glfwTerminate();
        return -1;
    }
    glfwMakeContextCurrent(window); // Initialize GLEW
    GLuint VertexArrayID;
    glGenVertexArrays(1, &VertexArrayID);
    glBindVertexArray(VertexArrayID);
    while (!glfwWindowShouldClose(window)) {

    }
}