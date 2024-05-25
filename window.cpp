#include "window.h"
#include "graphicHandler.h"

 Window::Window(const int width, const int height, const char* title) : width_(width), height_(height), title_(title){
	 InitWindow(width, height, title);
	 SetTargetFPS(60);
	}
const int Window::GetHeight() {
	return height_;
}

const int Window::GetWidth() {
	return width_;
}

const char* Window::GetTitle() {
	return title_;
}

void Window::Init(GraphicHandler& handler) {

	float ticks = 60.0;

	while (!WindowShouldClose()) {
		BeginDrawing();

		if (ticks > 0) {
			ticks--;
			ticks = 60.0;
		} else handler.Tick();

		handler.Render();
		

		EndDrawing();
	}
	CloseWindow();
}