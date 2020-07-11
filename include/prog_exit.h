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
	success_exit,
	sdl_init_err,
	window_mk_err,
	data_init_err,
	read_map_err,
	open_map_err,
	args_err
};

#endif