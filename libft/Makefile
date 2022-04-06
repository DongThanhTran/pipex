# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: dtran <dtran@student.codam.nl>               +#+                      #
#                                                    +#+                       #
#    Created: 2021/10/14 12:49:20 by dtran         #+#    #+#                  #
#    Updated: 2021/12/10 12:22:06 by dtran         ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a
CC		=	gcc
CFLAGS	=	-Wall -Werror -Wextra -c -o
AR		=	ar rcs

# include an other makefile which defines the variable SRCS & BSRCS
include source.mk

MKDIR	=	mkdir -p obj
RMDIR	=	rmdir -p obj

OBJ		=	$(SRCS:src/%.c=obj/%.o)

all: obj $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

obj/%.o: src/%.c
	$(CC) $(CFLAGS) $@ $< -I .

obj:
	@$(MKDIR)

# Clean object (.o) files
clean:
	@rm -rf $(OBJ)

# Clean library (.o) (.a) file
fclean: clean
	@rm -rf $(NAME)
	@$(RMDIR)

# make is -j4 compatiable
re: fclean
	$(MAKE) all

# .PHONY to make sure that the gnu doesn't confuse the Make that
# these are actual commands, not files.
.PHONY: all clean fclean re

# NOTES:

# Form of rules (functions):
# 'Target': 'Prerequisites'
#			'Recipe'

# $ = call variable.
# @ = silencing the print of the command.
# % = to fill in prefix.
# -I. = option for gcc: you can specify searching the directory which
# was current when the compiler was invoked.
# -c = option for gcc: do not run the linker (last step in compiling)
# before it makes the execution file. it will make an .o file).
# $^ is similar to $<, but $^ stands for all the dependencies while $< will only get the first one.
# $@ stands for the target, for example, main.o.

# The %.o: %.c rule means that for any .o file, we are depending on a .c file with the same name.
# If the object file doesn't exist or if the source file is newer then the object file, the contents of the rule will be executed.
# The recipe (rule contents) contains two special variables. $@ stands for the target, for example, main.o.
# $< stands for the first dependency, for example, main.c. In summary, this rule states that any object file will be compiled using the corresponding source file, using the gcc -c command.

# makefile with bonus:

# NAME	= 	libft.a
# CC		= 	gcc
# CFLAGS	= 	-Wall -Werror -Wextra -c
# AR		=	ar rcs

# include an other makefile which defines the variable SRCS & BSRCS
# include source.mk

# OBJ		= 	$(SRCS:src/%.c=obj/%.o)
# BOBJ	=	$(BSRCS:src/%.c=obj/%.o)

# $(info $(OBJ))

# ifdef ADD_BONUS
# COMP_ALL = ${OBJ} ${BOBJ}
# else
# COMP_ALL = ${OBJ}
# endif

# all: $(NAME)

# $(NAME): ${COMP_ALL}
# 	$(AR) $(NAME) $(COMP_ALL)

# obj/%.o: src/%.c
# 	$(CC) $(CFLAGS) -o $@ $< -I .

# bonus:
# 	${MAKE} ADD_BONUS=1

# Clean object (.o) files
# clean:
# 	rm -rf $(OBJ) $(BOBJ)

# Clean library (.o) (.a) file
# fclean: clean
# 	rm -rf $(NAME)

# make is -j4 compatiable
# re: fclean
# 	$(MAKE) all

# .PHONY to make sure that the gnu doesn't confuse the Make that
# these are actual commands, not files.
# .PHONY: all bonus clean fclean re