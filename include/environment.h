#ifndef ENVIRONMENT_H
# define ENVIRONMENT_H

#include <stdint.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_events.h>

#define SCREEN_WIDTH 640
#define SCREEN_HEIGHT 480

typedef struct	s_sdl
{
	SDL_Window	*win_ptr;
	SDL_Surface *canvas;
}				t_sdl;

typedef struct	s_env
{
	t_sdl		*sdl;
	uint32_t	features;
}				t_env;

#endif