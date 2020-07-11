#include "rt.h"

bool create_window(t_env *env)
{
	env->sdl->win_ptr = SDL_CreateWindow("Ray Tracer", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);

	if (!env->sdl->win_ptr)
		return (error);

	return (success);
}