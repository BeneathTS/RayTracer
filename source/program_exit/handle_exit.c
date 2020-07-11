#include "rt.h"

static char *get_err_msg(uint16_t status_id)
{
	if (status_id & sdl_init_err)
		return (SDL_INIT_ERR_MSG);

	else if (status_id & data_init_err)
		return (DATA_INIT_ERR_MSG);

	else if (status_id & read_map_err)
		return (READ_MAP_ERR_MSG);

	else if (status_id & open_map_err)
		return (OPEN_MAP_ERR_MSG);

	return("Unknown Error!\n");
}

static void display_error_message(const char *err_msg)
{
	int size;

	size = 0;
	while (err_msg[size])
		++size;
	
	write(1, err_msg, size);
}

void program_exit(uint16_t status_id, t_env *env, t_scene *scene)
{
	free_allocated_memory(status_id, env, scene);

	if (status_id ^ success_exit)
		display_error_message(get_err_msg(status_id));
	
	exit(0);
}