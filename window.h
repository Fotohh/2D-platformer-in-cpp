#ifndef WINDOW_H
#define WINDOW_H

#include <raylib.h>
#include "graphicHandler.h"

class Window
{
public:
	Window(const int width, const int height, const char* title);
	~Window() = default;
	const int GetWidth();
	const int GetHeight();
	const char* GetTitle();
	void Init(GraphicHandler& handler);

private:
	const int width_;
	const int height_;
	const char* title_;
};

#endif

