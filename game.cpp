#include "game.h"


Game::Game(Window* window) : window_(window) {
	
}

void Game::Tick() {

}

void Game::Render() {

}

void Game::Update() {
	float previous_time = 0.f;
	float ticks = 60.f;
	while (!WindowShouldClose()) {

		float current_time = static_cast<float>(GetTime());	
		float dt = current_time - previous_time / (1000000000 / ticks);
		previous_time = current_time;
		
		while (dt >= 1) {
			Game::Tick();
			dt--;
		}

		Game::Render();

		//TODO add in game loop
		//TODO add in character
		//TODO add in movement

	}
}


