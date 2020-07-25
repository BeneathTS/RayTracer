# Program name
PROG_NAME = RT

# Compiler name
COMPILER = gcc

# Build flags
CFLAGS = -Wall -Wextra -Werror
SDL_LIB_FLAGS = -lSDL2 -lSDL2_image

# Sources
SCENE_READER =			scene_reader.c			\
						check_input_data.c		\

EVENTS =				handle_events.c			\

PROGRAM_EXIT =			handle_exit.c			\
						free_memory.c			\

VECTORS =				vec_dir.c				\
						vec_div_num.c			\
						vec_dot.c				\
						vec_length.c			\
						vec_mult.c				\
						vec_mult_num.c			\
						vec_normalize.c			\
						vec_rotate.c			\
						vec_sub.c				\
						vec_sub_num.c			\
						vec_sum.c				\

DATA_INITIALIZATION =	init_sdl.c				\
						create_window.c			\
						init_env_data.c			\
						init_scene_data.c		\

SRC =					main.c					\
						launch.c				\
						$(PROGRAM_EXIT)			\
						$(DATA_INITIALIZATION)	\
						$(VECTORS)				\
						$(SCENE_READER)			\

# Object files
OBJ = $(SRC:.c=.o)

# Header files paths
LFT_HEADERS_PATH = -I libft/includes/
PRJ_HEADERS_PATH = -I include/
SDL2_HEADERS_PATH = -I /usr/local/include/SDL2

INCLUDE = $(PRJ_HEADERS_PATH) $(SDL2_HEADERS_PATH) $(LFT_HEADERS_PATH)

# Source folders
SRC_PATH = source/
LFT_PATH = libft/

vpath %.c $(SRC_PATH)
vpath %.c $(SRC_PATH)data_init
vpath %.c $(SRC_PATH)vectors
vpath %.c $(SRC_PATH)program_exit
vpath %.c $(SRC_PATH)events
vpath %.c $(SRC_PATH)scene_reader

.PHONY: all sdl_install lib clean fclean re

# Build program
all: lib $(PROG_NAME)

# Linking
$(PROG_NAME): $(OBJ)
	@$(COMPILER) $(CFLAGS) $(INCLUDE) $^ $(SDL_LIB_FLAGS) -L $(LFT_PATH) -lft -o $(PROG_NAME)

# Compile
$(OBJ): $(SRC)
	@$(COMPILER) $(CFLAGS) $(INCLUDE) $^ -c

lib:
	@make -C libft

# Remove Obj files
clean:
	@rm -f $(OBJ)
	@make -C libft clean

# Remove all created files
fclean: clean
	@rm -f $(PROG_NAME)
	@make -C libft fclean

# Rebuild program
re: fclean all

sdl_install:
	./SDL2_sh_installer/install.sh