#include "rt.h"

t_object *init_obj()
{
	t_object *object;

	object = (t_object*)malloc(sizeof(t_object));

	if (!object)
		return(NULL);

	// Set default object values

	return (object);
}


t_scene *init_scene()
{
	t_scene *scene;

	scene = (t_scene*)malloc(sizeof(t_scene));

	if (!scene)
		return (NULL);

	// That need only for segfault protection
	scene->cam = NULL;
	scene->obj = NULL;
	scene->light = NULL;

	// parse_scene();

	return (scene);
}