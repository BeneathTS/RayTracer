#ifndef RT_H
# define RT_H

#include <unistd.h>
#include <stdio.h>
#include <stdbool.h>

#include "environment.h"
#include "events.h"
#include "scene.h"
#include "reader.h"
#include "prog_exit.h"
#include "vectors.h" // Vectors lib header
#include "libft.h"

// Environment
t_env	*init_env();
bool	init_sdl2(t_env *env);
bool	create_window(t_env *env);

// Events
void launch_program(t_env *env, t_scene *scene);

// Scene
bool check_input_data(int argc, char **argv);
uint8_t read_scene(const char *scene_name, t_scene *scene);
uint8_t get_obj_type(int scene_fd);
t_scene		*init_scene();
t_object	*init_obj();

// Errors
void program_exit(uint16_t status_id, t_env *env, t_scene *scene);
void free_allocated_memory(uint16_t status_id, t_env *env, t_scene *scene);


#endif