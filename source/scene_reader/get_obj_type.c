#include "rt.h"

// static bool skip_empty_lines(int scene_fd, char *line)
// {
// 	uint8_t rd_status;

// 	while (1)
// 	{
// 		rd_status = get_next_line(scene_fd, &line);
// 		if (rd_status <= 0)
// 			return (error);
// 		if(!ft_strequ(line, "\0"))
// 			return (success);
// 	}
// }

// static uint8_t search_obj_type(const char *line)
// {
// 	if (ft_strequ(line, "Camera:"))
// 		return (cam);
// 	else if (ft_strequ(line, "Sphere:"))
// 		return (sphere);
// 	else if (ft_strequ(line, "Cone:"))
// 		return (cone);
// 	else if (ft_strequ(line, "Plane:"))
// 		return (plane);
// 	else if (ft_strequ(line, "Cylinder:"))
// 		return (cylinder);
// 	else if (ft_strequ(line, "Light:"))
// 		return (light);

// 	return (error);
// }

// uint8_t get_obj_type(int scene_fd)
// {
// 	char line;

// 	if (skip_empty_lines(scene_fd, &line) == error)
// 		return (error);

// 	return(search_obj_type(line));
// }