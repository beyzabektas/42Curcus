# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bebektas <bebektas@student.42kocaeli.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/30 11:07:25 by bebektas          #+#    #+#              #
#    Updated: 2024/01/07 15:44:33 by bebektas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
RM = rm -rf
CC = gcc
FLAG = -Wall -Wextra -Werror
CMPL = $(CC) $(FLAG) -c
MKDIR = mkdir
MV = mv
SRC = 	./strchr.c 		\
 		./strdup.c		\
 		./strjoin.c 	\
		./strlcpy.c		\
 		./ft_strlen.c 	\
		./ft_calloc.c	\
		./ft_bzero.c	\
		./printf.c		\
		./get_next_line.c

OBJ = $(SRC:.c=.o)
OBJDIR = OBJECTS

all: $(NAME)

$(NAME) :
	@$(MKDIR) $(OBJDIR)
	@$(CMPL) $(SRC)
	@ar rc $(NAME) $(OBJ)
	@$(MV) $(OBJ) $(OBJDIR)
clean :
	@$(RM) $(OBJDIR)
fclean : clean
	@$(RM) $(NAME)
re: fclean $(NAME)

.PHONY: all bonus clean fclean re
