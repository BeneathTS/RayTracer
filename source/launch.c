#include "rt.h"

static void working_process(t_env *env, t_scene *scene)
{
	SDL_Event event;
	bool status;

	status = run;
	while (status == run)
	{
		SDL_PollEvent(&event);
		if (event.type == SDL_QUIT)
			status = stop;
	}
	program_exit(success_exit, env, scene);
}

void launch_program(t_env *env, t_scene *scene)
{
	if (init_sdl2(env) == error)
		program_exit(sdl_init_err, env, scene);
	
	if (create_window(env) == error)
		program_exit(window_mk_err, env, scene);

	working_process(env, scene);
}
