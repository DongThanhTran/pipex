#.mk file extension gives this file makefile syntax highlighting

SRCS	= 	ft_atoi.c \
			ft_bzero.c \
			ft_calloc.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memset.c \
			ft_strchr.c \
			ft_strdup.c \
			ft_strlcat.c \
			ft_strlcpy.c \
			ft_strlen.c \
			ft_strncmp.c \
			ft_strnstr.c \
			ft_strrchr.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_substr.c \
			ft_strjoin.c \
			ft_strtrim.c \
			ft_itoa.c \
			ft_striteri.c \
			ft_strmapi.c \
			ft_putchar_fd.c \
			ft_putchar.c \
			ft_putstr_fd.c \
			ft_putstr.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \
			ft_putnbr_baseformat.c \
			ft_putnbr_base.c \
			ft_putnbr.c \
			ft_split.c \
			ft_isspace.c \
			ft_intlen.c \
			ft_strcpy.c \
			ft_strcmp.c \
			ft_lstnew.c \
			ft_lstadd_front.c \
			ft_lstsize.c \
			ft_lstlast.c \
			ft_lstadd_back.c \
			ft_lstdelone.c \
			ft_lstclear.c \
			ft_lstiter.c \
			ft_lstmap.c
SRCS := $(SRCS:%=src/%)

# if bonus needs to be added:

# BSRCS	=	ft_lstnew.c \
# 			ft_lstadd_front.c \
# 			ft_lstsize.c \
# 			ft_lstlast.c \
# 			ft_lstadd_back.c \
# 			ft_lstdelone.c \
# 			ft_lstclear.c \
# 			ft_lstiter.c \
# 			ft_lstmap.c
# BSRCS := $(BSRCS:%=src/%)
