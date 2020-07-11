#include "rt.h"

int main(int argc, char **argv)
{
	t_env *env;
	t_scene *scene;

	// That need only for segfault protection
	env = NULL;
	scene = NULL;

	// Init program data
	if (!(env = init_env()))
		program_exit(data_init_err, env, scene);

	if (check_input_data(argc, argv) == error)
		program_exit(args_err, env, scene);

	if (!(scene = init_scene()))
		program_exit(data_init_err, env, scene);

	// Start the renderer
	launch_program(env, scene);
	return (0);
}
