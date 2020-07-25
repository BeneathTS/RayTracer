#include "rt.h"

static int open_scene_file(const char *scene_name)
{
	int fd;

	fd = open(scene_name, O_RDONLY);

	if (fd < 0)
		return (error);

	return (fd);
}

uint8_t read_scene(const char *scene_name, t_scene *scene)
{
	int scene_fd;

	if (!(scene_fd = open_scene_file(scene_name)))
		return (open_scene_err);

	(void)scene;
	close(scene_fd);
	//exit(-1);
	return (success);
}