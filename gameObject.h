#pragma once

class GameObject {
public:
	GameObject(int x, int y);
	~GameObject();

	void draw_graphics();
private:
	int x;
	int y;
	double velX;
	double velY;
};
