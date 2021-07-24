#pragma once

// ERROR HANDLE
//========================================================
#define SAFE_GLFW_CALL(X) {(X);  const char* description; int code = glfwGetError(&description); if (description) {printf("GLFW ERROR! With code %d, with message [%s], in file [%s], on line %d\n", code, description, __FILE__, __LINE__);exit(-1);} }
//========================================================


// CONSTANTS
//========================================================
#define WINDOW_NAME "Space plunder"
#define WINDOW_INIT_WIDTH 1920
#define WINDOW_INIT_HEIGHT 1080
//========================================================


// BUILD CONFIG
//========================================================
#define GLFW_DLL
#define GLEW_BUILD
//========================================================


// INCLUDES
//========================================================
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <chrono>
#include <sys/time.h>
#include <ctime>
#include "Universe/Item.hpp"
//========================================================


// GLOBAL FUNCTIONS
//========================================================
// Window
void initWindow();
void updateWindow();
void cleanWindow();
bool windowMayClose();

// Universe
void initUniverse();
void updateUniverse(float dt);
void cleanUniverse();

void addItem(Item * it);
void removeItem(Item * it);

// Core
void init();
void update();
void clean();
//========================================================
