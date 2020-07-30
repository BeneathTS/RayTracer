#ifndef SCENE_H
# define SCENE_H

# include <stdint.h>

# include "vectors.h"

#define SCENE_FILE_EXT ".scene"

enum	e_object_id
{
	cam = 1,
	sphere,
	cone,
	plane,
	cylinder,
	light
};

typedef struct				s_object
{
	uint8_t					id;
	t_vec3f					pos;
	t_vec3f					dir;
	uint32_t				color;
	uint8_t					specular;
 	float					reflective;

	float					radius; // only sphere, cyllinder, cone

	struct s_object			*next;
	struct s_object			*prev;
}							t_object;

typedef struct				s_scene
{
	t_object				*cam;
	t_object				*obj;
	t_object				*light;
}							t_scene;

#endif
