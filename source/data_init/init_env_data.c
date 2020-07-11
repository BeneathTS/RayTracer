#include "rt.h"

t_env *init_env()
{
	t_env *env;

	env = (t_env *)malloc(sizeof(t_env));

	// malloc protection
	if (!env)
		return (NULL);

	// Set default values
	env->sdl = NULL;
	//env->features = 0x0;

	return (env);
}