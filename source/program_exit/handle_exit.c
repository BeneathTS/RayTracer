#include "rt.h"

static char *get_err_msg(uint16_t status_id)
{
	if (status_id == sdl_init_err)
		return (SDL_INIT_ERR_MSG);

	else if (status_id == data_init_err)
		return (DATA_INIT_ERR_MSG);

	else if (status_id == read_scene_err)
		return (READ_SCENE_ERR_MSG);

	else if (status_id == open_scene_err)
		return (OPEN_SCENE_ERR_MSG);

	return("Unknown Error!\n");
}

static void display_error_message(const char *err_msg)
{
	ft_putstr(err_msg);
}

void program_exit(uint16_t status_id, t_env *env, t_scene *scene)
{
	(void)env;
	(void)scene;
	//free_allocated_memory(status_id, env, scene);

	if (status_id != success_exit)
		display_error_message(get_err_msg(status_id));
	
	exit(0);
}