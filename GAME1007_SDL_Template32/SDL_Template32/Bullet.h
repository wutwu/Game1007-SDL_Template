#pragma once
#include "Sprite.h"
class Bullet :
	public Sprite
{
public:
	Bullet();
	Bullet(SDL_Renderer* renderer, const char* filename, int sizeX, int sizeY, float a_speed);

	float speed = 300;
	void update(float deltaTime) override;
};

