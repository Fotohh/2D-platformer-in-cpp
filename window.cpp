#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <string>
#include <iostream>

struct Contents {
	GLFWwindow* window;
	int width;
	int height;
	std::string title;
};

inline bool check_if_glad_not_exist() {
	if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
		std::cout << "Failed to initialize glad!";
		return true;
	}
	else return false;
}

inline void glad_window_frame_buffer(GLFWwindow*, int width, int height) {
	glViewport(0, 0, width, height);
}

inline void create_main_window(Contents& contents) {
	while (!glfwWindowShouldClose(contents.window)) {

		if (glfwGetKey(contents.window, GLFW_KEY_ESCAPE) == GLFW_PRESS) {
			glfwSetWindowShouldClose(contents.window, true);
		}

		//TODO add in game loop
		//TODO add in character
		//TODO add in movement

		glfwSwapBuffers(contents.window);
		glfwPollEvents();
	}
	glfwTerminate();
}

inline GLFWwindow* create_glad_window(int width, int height, const char* title, Contents& contents) {

	contents.height = height;
	contents.width = width;
	contents.title = title;

	glfwInit();
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	contents.window = glfwCreateWindow(width, height, title, nullptr, nullptr);
	if (contents.window == nullptr) {
		std::cout << "Failed to initialize window!" << std::endl;
		glfwTerminate();
		return nullptr;
	}
	glfwMakeContextCurrent(contents.window);
	glfwSetFramebufferSizeCallback(contents.window, glad_window_frame_buffer);
	if (check_if_glad_not_exist()) return nullptr;
	
	return contents.window;
}