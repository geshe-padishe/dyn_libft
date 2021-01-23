CC = gcc

NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

SRC_C = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
ft_isprint.c ft_itoa.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
ft_split.c ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c \
ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c \
ft_putendl_fd.c ft_putnbr_fd.c ft_putchar_fd.c ft_putstr_fd.c dynarray.c dynarray2.c ft_realloc.c

INC_H = libft.h dynarray.h

OBJS = $(SRC_C:.c=.o)
	
all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

$%.o: $%.c $(INC_H)
	$(CC) $(CFLAGS) -c $< -o $@
