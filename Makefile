NAME = so_long
NAME_B = so_long_bonus

HEADER = so_long.h\
		gnl/get_next_line.h\
		libft/libft.h\
		printf/ft_printf.h
	
LIBFT_DIR = libft
LIBFT_LIB = $(LIBFT_DIR)/libft.a

PRINTF_DIR = printf
PRINTF_LIB = $(PRINTF_DIR)/libftprintf.a

MLX_DIR = mlx
MLX_LIB = $(MLX_DIR)/libmlx.a

CC = gcc
CFLAGS = -Wall -Werror -Wextra
MLXFLAGS = -lmlx -framework OpenGL -framework AppKit

C_FILLE = 	utils \
			objet \
			generate_map \
			gnl/get_next_line \
			gnl/get_next_line_utils \
			get_assetes \
			exit \

M_FILLE = 	so_long \
			check_map \
			game_utils \
			move \

B_FILLE =	so_long_bonus \
			check_map_bonus \
			game_utils_bonus \
			move_bonus \

OBJS = $(C_FILLE:=.o) $(M_FILLE:=.o)
OBJS_B = $(C_FILLE:=.o) $(B_FILLE:=.o)

all: $(NAME)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -o $@ -c $<

$(NAME): $(OBJS) $(LIBFT_LIB) $(PRINTF_LIB) $(HEADER) 
	$(CC) $(CFLAGS) $(MLXFLAGS) $(LIBFT_LIB) $(PRINTF_LIB) $(OBJS) -o $(NAME)

$(NAME_B): $(OBJS_B) $(LIBFT_LIB) $(PRINTF_LIB) $(HEADER) 
	$(CC) $(CFLAGS) $(MLXFLAGS) $(LIBFT_LIB) $(PRINTF_LIB) $(OBJS_B) -o $(NAME_B)

bonus: $(NAME_B)

$(LIBFT_LIB):
	$(MAKE) -C $(LIBFT_DIR)
$(PRINTF_LIB):
	$(MAKE) -C $(PRINTF_DIR)

clean:
	$(RM) $(OBJS) $(OBJS_B)
	$(MAKE) clean -C $(LIBFT_DIR)
	$(MAKE) clean -C $(PRINTF_DIR)

fclean: clean
	$(RM) $(NAME) $(NAME_B)
	$(RM) $(LIBFT_LIB) $(PRINTF_LIB)

re: fclean all

.PHONY: all clean fclean re bonus