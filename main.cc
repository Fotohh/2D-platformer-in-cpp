#include <iostream>
#include "window.h"
#include "graphicHandler.h"



int main() {

	std::cout << "Hello World" << std::endl;

	Window window(600, 600, "App");

	auto handler = GraphicHandler();

	window.Init(handler);

	return 0;
}