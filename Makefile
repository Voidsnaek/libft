NAME	=	libft.a
C_DIR	=	./
O_DIR	=	./
H_DIR	=	./
SRC	=	$(SRC_DIR)ft_memset.c \
		$(SRC_DIR)ft_bzero.c \
		$(SRC_DIR)ft_memcpy.c \
		$(SRC_DIR)ft_memccpy.c \
		$(SRC_DIR)ft_memmove.c \
		$(SRC_DIR)ft_memchr.c \
		$(SRC_DIR)ft_memcmp.c \
		$(SRC_DIR)ft_strlen.c \
		$(SRC_DIR)ft_strdup.c \
		$(SRC_DIR)ft_strcpy.c \
		$(SRC_DIR)ft_strncpy.c \
		$(SRC_DIR)ft_strcat.c \
		$(SRC_DIR)ft_strncat.c \
		$(SRC_DIR)ft_strlcat.c \
		$(SRC_DIR)ft_strchr.c \
		$(SRC_DIR)ft_strrchr.c \
		$(SRC_DIR)ft_strstr.c \
		$(SRC_DIR)ft_strnstr.c \
		$(SRC_DIR)ft_strcmp.c \
		$(SRC_DIR)ft_strncmp.c \
		$(SRC_DIR)ft_atoi.c \
		$(SRC_DIR)ft_isalpha.c \
		$(SRC_DIR)ft_isdigit.c \
		$(SRC_DIR)ft_isalnum.c \
		$(SRC_DIR)ft_isascii.c \
		$(SRC_DIR)ft_isprint.c \
		$(SRC_DIR)ft_toupper.c \
		$(SRC_DIR)ft_tolower.c \
		$(SRC_DIR)ft_memalloc.c \
		$(SRC_DIR)ft_memdel.c \
		$(SRC_DIR)ft_strnew.c \
		$(SRC_DIR)ft_strdel.c \
		$(SRC_DIR)ft_strclr.c \
		$(SRC_DIR)ft_striter.c \
		$(SRC_DIR)ft_striteri.c \
		$(SRC_DIR)ft_strmap.c\
		$(SRC_DIR)ft_strmapi.c \
		$(SRC_DIR)ft_strequ.c \
		$(SRC_DIR)ft_strnequ.c \
		$(SRC_DIR)ft_strsub.c \
		$(SRC_DIR)ft_strjoin.c \
		$(SRC_DIR)ft_strtrim.c \
		$(SRC_DIR)ft_strsplit.c \
		$(SRC_DIR)ft_itoa.c \
		$(SRC_DIR)ft_putchar.c \
		$(SRC_DIR)ft_putstr.c \
		$(SRC_DIR)ft_putendl.c \
		$(SRC_DIR)ft_putnbr.c \
		$(SRC_DIR)ft_putchar_fd.c \
		$(SRC_DIR)ft_putstr_fd.c \
		$(SRC_DIR)ft_putendl_fd.c \
		$(SRC_DIR)ft_putnbr_fd.c
OBJ	=	$(OBJ_DIR)ft_memset.o \
		$(OBJ_DIR)ft_bzero.o \
		$(OBJ_DIR)ft_memcpy.o \
		$(OBJ_DIR)ft_memccpy.o \
		$(OBJ_DIR)ft_memmove.o \
		$(OBJ_DIR)ft_memchr.o \
		$(OBJ_DIR)ft_memcmp.o \
		$(OBJ_DIR)ft_strlen.o \
		$(OBJ_DIR)ft_strdup.o \
		$(OBJ_DIR)ft_strcpy.o \
		$(OBJ_DIR)ft_strncpy.o \
		$(OBJ_DIR)ft_strcat.o \
		$(OBJ_DIR)ft_strncat.o \
		$(OBJ_DIR)ft_strlcat.o \
		$(OBJ_DIR)ft_strchr.o \
		$(OBJ_DIR)ft_strrchr.o \
		$(OBJ_DIR)ft_strstr.o \
		$(OBJ_DIR)ft_strnstr.o \
		$(OBJ_DIR)ft_strcmp.o \
		$(OBJ_DIR)ft_strncmp.o \
		$(OBJ_DIR)ft_atoi.o \
		$(OBJ_DIR)ft_isalpha.o \
		$(OBJ_DIR)ft_isdigit.o \
		$(OBJ_DIR)ft_isalnum.o \
		$(OBJ_DIR)ft_isascii.o \
		$(OBJ_DIR)ft_isprint.o \
		$(OBJ_DIR)ft_toupper.o \
		$(OBJ_DIR)ft_tolower.o \
		$(OBJ_DIR)ft_memalloc.o \
		$(OBJ_DIR)ft_memdel.o \
		$(OBJ_DIR)ft_strnew.o \
		$(OBJ_DIR)ft_strdel.o \
		$(OBJ_DIR)ft_strclr.o \
		$(OBJ_DIR)ft_striter.o \
		$(OBJ_DIR)ft_striteri.o \
		$(OBJ_DIR)ft_strmap.o \
		$(OBJ_DIR)ft_strmapi.o \
		$(OBJ_DIR)ft_strequ.o \
		$(OBJ_DIR)ft_strnequ.o \
		$(OBJ_DIR)ft_strsub.o \
		$(OBJ_DIR)ft_strjoin.o \
		$(OBJ_DIR)ft_strtrim.o \
		$(OBJ_DIR)ft_strsplit.o \
		$(OBJ_DIR)ft_itoa.o \
		$(OBJ_DIR)ft_putchar.o \
		$(OBJ_DIR)ft_putstr.o \
		$(OBJ_DIR)ft_putendl.o \
		$(OBJ_DIR)ft_putnbr.o \
		$(OBJ_DIR)ft_putchar_fd.o \
		$(OBJ_DIR)ft_putstr_fd.o \
		$(OBJ_DIR)ft_putendl_fd.o \
		$(OBJ_DIR)ft_putnbr_fd.o
INCLUDE	=	-I$(H_DIR)
HEADER	=	libft.h
FLAGS	=	-Wall -Werror -Wextra
CC	=	gcc
RM	=	rm -f

.PHONY	:	all clean fclean re

all		:	$(NAME)
$(OBJ)	:
		$(CC) -c $(FLAG) $(INCLUDE) $(C_DIR)$(SRC)
$(NAME)	:	$(OBJ)
		ar rc $(NAME) $(O_DIR)$(OBJ)
		ranlib $(NAME)
clean	:
		$(RM) $(O_DIR)$(OBJ)
fclean	:	clean
		$(RM) $(NAME)
re		:	fclean all
