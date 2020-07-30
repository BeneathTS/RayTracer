#include "rt.h"

int main(int argc, char **argv)
{
	t_env *env;
	t_scene *scene;
	//uint8_t	rd_stat;

	env = NULL;
	scene = NULL;

	if (check_input_data(argc, argv) == error)
		program_exit(args_err, env, scene);

	if (!(env = init_env()))
		program_exit(data_init_err, env, scene);

	if (!(scene = init_scene()))
		program_exit(data_init_err, env, scene);

	//if ((rd_stat = read_scene(argv[1], scene)) != success)
	//	program_exit(rd_stat, env, scene);

	launch_program(env, scene);

	return (0);
}
