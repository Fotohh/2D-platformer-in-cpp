#include <iostream>
#include "window.h"
#include "game.h"

int main() {

	std::cout << "Hello World!" << std::endl;

	Window window(500, 500, "App");

	Game game(&window);

	game.Update();
	
	return 0;	
}

