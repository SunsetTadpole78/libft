/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:35:19 by lroussel          #+#    #+#             */
/*   Updated: 2025/02/26 17:12:42 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

# define MIN_INT -2147483648
# define MAX_INT 2147483647

/* ___________________________ Partie Obligatoire ___________________________ */

void			ft_bzero(void *s, size_t n);
void			ft_putchar_fd(char c, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_striteri(char *s, void (*f)(unsigned int, char *));

void			*ft_calloc(size_t nmemb, size_t size);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_memmove(void *dest, const void *src, size_t n);
void			*ft_memset(void *s, int c, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);

int				ft_atoi(const char *nptr);
int				ft_islower(int c);
int				ft_isupper(int c);
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
int				ft_tolower(int c);
int				ft_toupper(int c);

unsigned int	ft_count_digits(int n);
unsigned int	ft_count_words(char const *s, char const *charset);

size_t			ft_strlcat(char *dst, const char *src, size_t size);
size_t			ft_strlcpy(char *dst, const char *src, size_t size);
size_t			ft_strlen(const char *s);

char			*ft_get_first_word(char const *s, char const *charset);
char			*ft_itoa(int n);
char			*ft_strchr(const char *s, int c);
char			*ft_strdup(const char *s);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char			*ft_strnstr(const char *big, const char *little, size_t len);
char			*ft_strrchr(const char *s, int c);
char			*ft_strtrim(char const *s1, char const *set);
char			*ft_substr(char const *s, unsigned int start, size_t len);

char			**ft_split(char const *s, char c);

/* ______________________________ Partie Bonus ______________________________ */

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

void			ft_lstadd_back(t_list **lst, t_list *new);
void			ft_lstadd_front(t_list **lst, t_list *new);
void			ft_lstclear(t_list **lst, void (*del)(void *));
void			ft_lstdelone(t_list *lst, void (*del)(void *));
void			ft_lstiter(t_list *lst, void (*f)(void *));

int				ft_lstsize(t_list *lst);

t_list			*ft_lstlast(t_list *lst);
t_list			*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void*));
t_list			*ft_lstnew(void *content);

//temp
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

typedef struct s_vector2
{
	int	x;
	int	y;
}	t_vector2;

void			*ft_realloc(void *ptr, size_t old_size, size_t new_size);
char			*ft_securejoin(char const *s1, char const *s2, char must_free);
int				ft_securelen(char const *str);
int				ft_isquote(int c);
int				ft_iswhitespace(int c);
char			*get_next_line(int fd);
char			*ft_get_contents(int fd);
int				ft_abs(int v);

#endif
