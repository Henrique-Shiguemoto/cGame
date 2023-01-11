#pragma once

#include <stdio.h>

#define SDL_MAIN_HANDLED
#include "SDL.h"
#include "SDL_image.h"
#include "SDL_ttf.h"
#include "mthlib.h"

#define WINDOW_WIDTH	768
#define WINDOW_HEIGHT	640

typedef struct Window{
	SDL_Window* window;
	SDL_Renderer* renderer;
} Window;

typedef struct Ball{
	v2 pos;
	SDL_Texture* texture;
} Ball;

typedef Ball Hole;

b8 InitializeSystems(void);
b8 CreateWindow(void);
b8 LoadAssets(void);
void QuitGame(void);