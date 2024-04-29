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
	GameObject(int x, int y, const GameObjectType& type);

	~GameObject() = default;
	
	const GameObjectType& GetObjectType();

	void Render(Texture2D texture);

	void Tick();

	int GetX();

	int GetY();

private:
	const GameObjectType& type_;
	int x_;
	int y_;
};
#endif

