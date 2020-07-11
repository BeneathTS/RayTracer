#include "rt.h"

static void sdl_exit(t_env *env)
{
	if (env->sdl->win_ptr)
		SDL_DestroyWindow(env->sdl->win_ptr);

	SDL_Quit();
}

static void clear_object_list(t_object * first_obj)
{
	t_object *tmp;

	while (first_obj)
	{
		tmp = first_obj->next;
		free(first_obj);
		first_obj = tmp;
	}
}

static void clear_scene(t_scene *scene)
{
	if (!scene)
		return ;
	if (scene->light)
		clear_object_list(scene->light);
	if (scene->obj)
		clear_object_list(scene->obj);
	if (scene->cam)
		free(scene->cam);
}

// static void clear_env(t_env *env)
// {

// }

void free_allocated_memory(uint16_t status_id, t_env *env, t_scene *scene)
{
	(void)env;

	clear_scene(scene);

	if (status_id ^ sdl_init_err)
		sdl_exit(env);
	
}