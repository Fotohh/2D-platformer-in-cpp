#pragma once

#include <raylib.h>
#include <string>

class Window {

public:
	
	Window(int width, int height, const char* title);
	~Window(void);

private:
	void CreateWindow(int width, int height, const char* title);
private:
	std::string title_;
	int width_;
	int height_;
};
