DEFAULT = ft_isalpha.c	\
	ft_isdigit.c		\
	ft_isalnum.c		\
	ft_isascii.c		\
	ft_isprint.c		\
	ft_strlen.c			\
	ft_memset.c 		\
	ft_bzero.c  		\
	ft_memcpy.c 		\
	ft_memmove.c		\
	ft_strlcpy.c		\
	ft_strlcat.c		\
	ft_toupper.c		\
	ft_tolower.c		\
	ft_strchr.c 		\
	ft_strrchr.c		\
	ft_strncmp.c		\
	ft_memchr.c			\
	ft_memcmp.c 		\
	ft_strnstr.c		\
	ft_atoi.c			\
	ft_strdup.c 		\
	ft_calloc.c 		\
	ft_substr.c 		\
	ft_strjoin.c		\
	ft_strtrim.c		\
	ft_count_words.c	\
	ft_count_words_charset.c\
	ft_get_first_word.c	\
	ft_split.c			\
	ft_split_charset.c		\
	ft_split_raw.c			\
	ft_itoa.c			\
	ft_count_digits.c	\
	ft_strmapi.c		\
	ft_striteri.c		\
	ft_putchar_fd.c		\
	ft_putstr_fd.c		\
	ft_putendl_fd.c		\
	ft_putnbr_fd.c		\
	ft_islower.c		\
	ft_isupper.c		\
	$(TEMP)
BONUS = ft_lstnew_bonus.c	\
	ft_lstadd_front_bonus.c	\
	ft_lstsize_bonus.c		\
	ft_lstlast_bonus.c		\
	ft_lstadd_back_bonus.c	\
	ft_lstdelone_bonus.c	\
	ft_lstclear_bonus.c		\
	ft_lstiter_bonus.c		\
	ft_lstmap_bonus.c
TEMP = ft_iswhitespace.c	\
       ft_realloc.c		\
       ft_securelen.c		\
       ft_isquote.c		\
       ft_securejoin.c		\
       get_next_line.c		\
       ft_get_contents.c	\
       ft_max.c			\
       ft_min.c			\
       ft_abs.c			\
       ft_bytes_count.c		\
       ft_strlen_utf8.c		\
       ft_strlen_without_ansi.c		\
       ft_strlen_utf8_without_ansi.c		\
       ft_isonlywhitespaces.c	\
       ft_pathjoin.c		\
       ft_strreplace_part.c	\
       ft_getlast_newline.c	\
       ft_remove_extension.c	\
       ft_get_extension.c	\
       ft_strcount_char.c	\
       ft_iscurrent_dirpath.c	\
       ft_cleanpath.c		\
       ft_nothing.c		\
       ft_array.c		\
       ft_array_push.c		\
       ft_array_pop.c		\
       ft_array_unshift.c	\
       ft_array_add.c		\
       ft_array_set_value.c	\
       ft_array_count_value.c	\
       ft_array_all.c		\
       ft_array_any.c		\
       ft_array_swap.c		\
       ft_array_count.c		\
       ft_array_unset.c		\
       ft_array_free_entry.c	\
       ft_array_nothing_entry.c	\
       ft_array_dup.c		\
       ft_array_merge.c		\
       ft_scandir.c		\
       ft_isdir.c		\
       ft_isfile.c		\
       ft_canaccess.c		\
       ft_isdotpath.c

OBJS =  $(DEFAULT:%.c=%.o)
OBJS_A = $(OBJS) $(BONUS:%.c=%.o)
NAME = libft.a
FLAGS = -Wall -Wextra -Werror -g

all: $(NAME)

$(NAME): $(OBJS)
	ar cr $(NAME) $(OBJS)

bonus: $(OBJS_A)
	ar cr $(NAME) $(OBJS_A)

%.o: %.c
	gcc $(FLAGS) $< -c -o $@

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
