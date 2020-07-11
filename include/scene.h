#ifndef SCENE_H
# define SCENE_H

# include <stdint.h>

# include "vectors.h"

#define SCENE_FILE_EXT ".scene"

enum	e_object_id
{
	cam,
	sphere,
	cone,
	plane,
	cylinder,
	point_light,
	directional_light,
	ambient
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
