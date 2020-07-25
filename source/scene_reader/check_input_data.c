#include "rt.h"

static bool check_file(const char *scene)
{
	int fd;

	fd = open(scene, O_RDONLY);

	if (fd < 0)
		return (error);
	close(fd);
	return (success);
}

static uint8_t identify_arg_class(const char *arg)
{
	int scene_name_len;

	if (*arg == '-')
		return (flag_arg);
	else
	{
		scene_name_len = ft_strlen(arg) - ft_strlen(SCENE_FILE_EXT);

		if (scene_name_len > 0 && ft_strequ(&arg[scene_name_len], SCENE_FILE_EXT))
			return (file_arg);
	}
	return (error_arg);
}

static uint8_t check_args(int argc, char **argv)
{
	int ct;
	int scene;
	uint8_t arg_class;

	ct = 0;
	scene = 0;
	while (++ct < argc)
	{
		arg_class = identify_arg_class(argv[ct]);

		if (arg_class == error_arg)
			return (args_err);
		
		else if (arg_class == flag_arg)
			return (error); // Change if we add flags

		else if (arg_class == file_arg)
			if(check_file(argv[ct]) == error || scene++)
				return (invalid_inpunt_err);
	}
	return (success);
}

bool check_input_data(int argc, char **argv)
{
	if (argc == 1)
		return (error);

	return(check_args(argc, argv));
}