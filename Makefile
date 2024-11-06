SRC_DIR = src
INCLUDE_DIR = include
FILES = ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_strlen.c  \
	ft_memset.c  \
	ft_bzero.c   \
	ft_memcpy.c  \
	ft_memmove.c \
	ft_strlcpy.c \
	ft_strlcat.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_strchr.c  \
	ft_strrchr.c \
	ft_strncmp.c \
	ft_memchr.c  \
	ft_memcmp.c  \
	ft_strnstr.c \
	ft_atoi.c    \
	ft_strdup.c  \
	ft_calloc.c  \
	ft_substr.c  \
	ft_strjoin.c \
	ft_islower.c \
	ft_isupper.c
OBJS =  $(FILES:%.c=$(SRC_DIR)/%.o)
NAME = libft.a
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	ar cr $(NAME) $(OBJS)

%.o: $(SRC_DIR)/%.c
	gcc $(FLAGS) -I $(INCLUDE_DIR) -o $@ -g

clean:
	rm -f $(SRC_DIR)/*.o

fclean: clean
	rm -f $(NAME)

re: fclean all

test: re
	gcc main.c $(NAME) -g && ./a.out

.PHONY: all clean fclean re
