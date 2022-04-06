# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: dtran <dtran@student.codam.nl>               +#+                      #
#                                                    +#+                       #
#    Created: 2022/02/28 13:28:19 by dtran         #+#    #+#                  #
#    Updated: 2022/04/06 17:44:16 by dtran         ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME		=	pipex
LIBFT_DIR	=	./libft
LIBFT		=	./libft/libft.a
INCLUDE		=	-I ./libft
CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror

SRCS	=	./pipex.c \
			pipex_utils.c

OBJ		=	$(SRCS:%.c=%.o)

all: $(NAME)

$(NAME): $(LIBFT) $(OBJ)
	$(CC) $^ $(CFLAGS) -o $(NAME)

%.o: %.c
	$(CC) $(INCLUDE) -c $< -o $@

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

bonus: all

clean:
	$(MAKE) fclean -C $(LIBFT_DIR)
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all, bonus, clean, fclean, re