#ifndef PROG_EXIT_H
#define PROG_EXIT_H

#define SDL_INIT_ERR_MSG "q\n"
#define DATA_INIT_ERR_MSG "qw\n"
#define READ_MAP_ERR_MSG "qwe\n"
#define OPEN_MAP_ERR_MSG "qwer\n"

enum e_function_exit_status
{
	error,
	success
};

enum e_status_id
{
	success_exit =	(1 << 0),
	sdl_init_err =	(1 << 1),
	window_mk_err = (1 << 2),
	data_init_err =	(1 << 3),
	read_map_err =	(1 << 4),
	open_map_err =	(1 << 5)
};

#endif