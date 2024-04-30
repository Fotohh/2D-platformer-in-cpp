#ifndef GAME_OBJECT_H
#define GAME_OBJECT_H

#include <raylib.h>

enum GameObjectType
{
	PLAYER,
	ENEMY,
	OBJECT
};

class GameObject
{
public:
	GameObject(int x, int y, const GameObjectType type);

	~GameObject() = default;
	
	const GameObjectType GetObjectType();

	void Render();

	void Tick();

	const int GetX();

	const int GetY();

private:
	const GameObjectType type_;
	int x_;
	int y_;
};
#endif

