#include "Core.hpp"

// LOCAL FIELDS
//========================================================
GLFWwindow* window = { 0 };
//========================================================


// LOCAL FUNCTIONS
//========================================================
void glfwErrorsHandler(int error, const char* description)
{
    fprintf(stderr, "Error: %s\n", description);
    exit(-1);
}
//========================================================


// GLOBAL FUNCTIONS
//========================================================
void initWindow() {
	SAFE_GLFW_CALL(glfwSetErrorCallback(glfwErrorsHandler));

	glfwInit();

	// Hints
	glfwWindowHint(GLFW_VISIBLE, GLFW_TRUE);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 2);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 0);

	window = glfwCreateWindow(WINDOW_INIT_WIDTH, WINDOW_INIT_HEIGHT, WINDOW_NAME, NULL, NULL);

	 glfwMakeContextCurrent(window);
}

void updateWindow() {
    glfwSwapBuffers(window);
    glfwPollEvents();
}

void cleanWindow() {
	SAFE_GLFW_CALL(glfwDestroyWindow(window));
	SAFE_GLFW_CALL(glfwTerminate());
}

bool windowMayClose() {
	return glfwWindowShouldClose(window);
}
//========================================================
