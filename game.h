#pragma once

#include "window.h"

class Game {
public:
	Game(Window* window);
	void Update();
	
private:
	void Tick();
	void Render();

private:
	Window* window_;
};

