#ifndef PLAYGROUND_H
#define PLAYGROUND_H

// Include GLEW
#include <GL/glew.h>

//some global variables for handling the vertex buffer
GLuint vertexbuffer;
GLuint vertexbuffer_triangle;
GLuint colorbuffer;
GLuint VertexArrayID;
GLuint vertexbuffer_size;
static GLfloat g_color_buffer_data[12*3*3];

//program ID of the shaders, required for handling the shaders with OpenGL
GLuint programID;

void steer(long long int direction, bool b, bool b1, bool b2, bool b3);
int main( void ); //<<< main function, called at startup
void updateAnimationLoop(long long int duration); //<<< updates the animation loop
bool initializeWindow(); //<<< initializes the window using GLFW and GLEW
bool initializeVertexbuffer(); //<<< initializes the vertex buffer array and binds it OpenGL
bool cleanupVertexbuffer(); //<<< frees all recources from the vertex buffer
bool closeWindow(); //<<< Closes the OpenGL window and terminates GLFW

#endif