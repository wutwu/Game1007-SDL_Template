#pragma once
#include<SDL_image.h>

// Sprite class which contains a texture, position, velocity, size, and functions for drawing it.


int distanceSq(int x1, int y1, int x2, int y2);

class Sprite
{
	SDL_Renderer* renderer;
	SDL_Texture* pSpriteTex = nullptr;
	SDL_Rect src;

public:
	SDL_Rect dst;

	// velocity (maybe not necessary for every sprite)
	float velX = 0;
	float velY = 0;

	// constructors -- these are used when initializing an object
	Sprite();
	Sprite(SDL_Renderer* renderer, const char* filename, int sizeX, int sizeY);
	
	// destructor -- used when the object is to be removed from memory
	~Sprite();

	void setPosition(int x, int y);
	void setSize(int x, int y);
	void draw();
	virtual void update(float deltaTime);

	bool isCollidingWith(const Sprite &other);
	bool isCollidingCircular(const Sprite& other);

	void cleanup();
};

