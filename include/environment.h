#ifndef ENVIRONMENT_H
# define ENVIRONMENT_H

#include <stdint.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_events.h>

#define SCREEN_WIDTH 640
#define SCREEN_HEIGHT 480

// enum e_program_features
// {

// };

typedef struct	s_sdl
{
	SDL_Window	*win_ptr;
	SDL_Surface *canvas;
}				t_sdl;

typedef struct	s_env
{
	t_sdl		*sdl;
	//uint32_t	features; // Concept thing
}				t_env;

#endif