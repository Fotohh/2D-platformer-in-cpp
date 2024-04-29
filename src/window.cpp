#include "window.h"

#include <string>
#include <iostream>

Window::Window(int width, int height, const char* title) : title_(title), width_(width), height_(height) {
}

void Window::CreateWindow(int width, int height, const char* title) {
	InitWindow(width, height, title);
	SetTargetFPS(60);
}

Window::~Window(void) {
	CloseWindow();
}

