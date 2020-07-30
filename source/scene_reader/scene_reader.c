#include "rt.h"

// static int open_scene_file(const char *scene_name)
// {
// 	int fd;

// 	fd = open(scene_name, O_RDONLY);

// 	if (fd < 0)
// 		return (error);

// 	return (fd);
// }

// static bool create_object(uint8_t obj_type, t_scene *scene)
// {
// 	t_object *node_head;

// 	if (obj_type == cam)
// 	{
// 		init_cam();
// 	}

// 	if (obj_type == object)
// 	{
// 		init_object();
// 	}

// 	if (obj_type == light)
// 	{
// 		init_light();
// 	}

// 	else
// 		return (error);
// 	return (success);
// }

// static uint8_t parse_scene_file(int scene_fd, t_scene *scene)
// {
// 	uint8_t rd_stat;
// 	uint8_t obj_type;

// 	rd_stat = reading;

// 	while (rd_stat == reading)
// 	{
// 		if (!(obj_type = get_obj_type(scene_fd)))
// 			return (read_scene_err);

// 		//create_object();

// 		parse_object_body();
// 	}
// 	return (success);
// }

// uint8_t read_scene(const char *scene_name, t_scene *scene)
// {
// 	int scene_fd;
// 	uint8_t rd_stat;

// 	if (!(scene_fd = open_scene_file(scene_name)))
// 		return (open_scene_err);

// 	rd_stat = parse_scene_file(scene_fd, scene);

// 	close(scene_fd);
// 	return (rd_stat);
// }