#pragma once

#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <string>

class Window {
public:
	
	Window(int width, int height, const char* title);
	~Window(void);

	int GetWidth(void) const;
	int GetHeight(void) const;

	const std::string& GetTitle(void);

	GLFWwindow* GetWindow(void);
private:
	void CreateWindow(int width, int height, const char* title);
	bool CheckGlad(void);
private:
	std::string title_;
	GLFWwindow* window_;
	int width_;
	int height_;
};
