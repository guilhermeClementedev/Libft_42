# -*- MakeFile -*-

all: exec

NAME = exec

MY_SOURCES = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_strlen.c \
ft_toupper.c ft_tolower.c ft_atoi.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strnstr.c \
ft_strlcpy.c ft_strlcat.c ft_strdup.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
ft_memchr.c ft_memcmp.c

MY_OBJECTS = $(MY_SOURCES:.c=.o)

CFLAGS += -Wall -Wextra -Werror

$(NAME): $(MY_OBJECTS)
	cc $(CFLAGS) -o $(NAME) $(MY_OBJECTS)

clean:
	rm -rf *.o

fclean: clean
	rm -f $(NAME)
run:
	./$(NAME)

re: fclean all
