#ifndef SCENE_H
# define SCENE_H

# include <stdint.h>

# include "vectors.h"

enum	e_object_id
{
	sphere = 				1,
	cone = 					2,
	plane = 				3,
	cylinder = 				4
};

enum	e_light_id
{
	ambient = 				1,
	point = 				2,
	directional = 			3
};

typedef struct				s_object
{
	uint8_t					id;
	t_vec3f					pos;
	t_vec3f					dir;
	struct s_object		*next;
}							t_object;

typedef struct				s_scene
{
	t_object				*cam;
	t_object				*obj;
	t_object				*light;
}							t_scene;

#endif
