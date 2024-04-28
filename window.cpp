#include "window.h"

#include <string>
#include <iostream>

void buffer(GLFWwindow*, int width, int height) {
	glViewport(0, 0, width, height);
}

Window::Window(int width, int height, const char* title) : title_(title), width_(width), height_(height) {
	Window::CreateWindow(width, height, title);
}

bool Window::CheckGlad(void) {
	if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
		std::cout << "Failed to initialize glad!";
		return false;
	}
	return true;
}

void Window::CreateWindow(int width, int height, const char* title) {

	glfwInit();
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	window_ = glfwCreateWindow(width, height, title, nullptr, nullptr);
	if (window_ == nullptr) {
		std::cout << "Failed to initialize window!" << std::endl;
		glfwTerminate();
		return;
	}

	glfwMakeContextCurrent(window_);
	glfwSetFramebufferSizeCallback(window_, buffer);
	CheckGlad();
}

int Window::GetWidth(void) const {
	return width_;
}

int Window::GetHeight(void) const {
	return height_;
}

const std::string& Window::GetTitle(void) {
	return title_;
}

GLFWwindow* Window::GetWindow(void) {
	return window_;
}

Window::~Window(void) {
	glfwDestroyWindow(window_);
	glfwTerminate();
}

