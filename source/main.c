#include "rt.h"

int main(int argc, char **argv)
{
	t_env *env;
	t_scene *scene;

	// That need only for segfault protection
	env = NULL;
	scene = NULL;

	// Init program data
	env = init_env();
	if (!env)
		program_exit(data_init_err, env, scene);

	scene = init_scene(argc, argv);
	if (!scene)
		program_exit(data_init_err, env, scene);

	// Start the renderer
	launch_program(env, scene);
	return (0);
}
