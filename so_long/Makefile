# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bebektas <bebektas@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/16 17:21:51 by jonchich          #+#    #+#              #
#    Updated: 2024/01/07 14:55:51 by bebektas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        = so_long

SRC         =	src/game_over.c \
				src/move_checkers.c \
				src/main.c \
				src/map_checkers.c \
				src/mlx_initialization.c \
				src/file_checkers.c \
				src/key_checkers.c \
				src/map_checkers_2.c

SRCDIR      = ./

SRCDIR_SRC = src

SRCDIR_MLX = minilibx


OBJ         = $(addprefix $(OBJDIR)/, $(notdir $(patsubst %.c, %.o, $(SRC))))

BASE        = $(basename  $(SRC))

OBJDIR      = ./obj

CC          = gcc

CFLAGS      = -Wall -Wextra -Werror

RM          = rm -f

ECHO        = echo

LIBFT =     ./libft/libft.a

LFLAGS = -Lminilibx -lmlx -framework OpenGL -framework AppKit

all         : $(NAME) 

$(OBJDIR):
	@mkdir -p $(OBJDIR)

$(NAME): $(LIBFT) mlx $(OBJ)
	@$(CC) $(CFLAGS) -o $(NAME) $(SRC) $(LIBFT) $(LFLAGS)

$(OBJDIR)/%.o:: $(SRCDIR_SRC)/%.c | $(OBJDIR)
	$(CC) $(CFLAGS) -c -o $@ $<

$(LIBFT):
	@make -C ./libft all


mlx:
	@make -C ./minilibx all	

c: clean
clean       :
	@make -C ./libft clean
	@make -C ./minilibx clean
	@$(RM) -r $(OBJDIR)
	@$(ECHO) "\033[0;34m> so_long Directory cleaned\033[0m"

f: fclean
fclean      : clean
	@make -C ./libft fclean
	@$(RM) $(NAME)
	@$(ECHO) "\033[0;35m> so_long Binary removed\033[0m"

r: re
re          : fclean all

bin         : all clean

.PHONY : debug all clean fclean re bin f c r
