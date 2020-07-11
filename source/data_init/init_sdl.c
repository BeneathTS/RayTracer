#include "rt.h"

bool init_sdl2(t_env *env)
{
	if (!(env->sdl = (t_sdl *)malloc(sizeof(t_sdl))))
		return (error);

	if (SDL_Init(SDL_INIT_VIDEO) < 0)
		return (error);

	env->sdl->canvas = NULL;
	env->sdl->win_ptr = NULL;

	return (success);
}
