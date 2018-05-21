/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtulchiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/26 12:13:20 by rtulchiy          #+#    #+#             */
/*   Updated: 2018/04/17 13:41:54 by rtulchiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

t_list				*ft_lstn(t_list *lst, size_t n);
char				**ft_field2(size_t x, size_t y, char c);
void				ft_arprint(char **f);
char				*ft_field(size_t x, size_t y, char c);
void				ft_lstadd2(t_list *lst, t_list *new);
t_list				*ft_lstsearch(t_list *lst, const void *content,
						size_t size);
int					*ft_sortint(int *arr, size_t size);
char				**ft_sortarr(char **s);
t_list				*ft_lstnadd(t_list *lst, t_list *new, size_t n);
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
t_list				*ft_lstnew(const void *content, size_t content_size);
void				ft_putnbr_fd(int n, int fd);
void				ft_putendl_fd(const char *s, int fd);
void				ft_putstr_fd(const char *s, int fd);
void				ft_putchar_fd(char c, int fd);
void				ft_putnbr(int c);
void				ft_putendl(const char *s);
void				ft_putstr(const char *s);
void				ft_putchar(char c);
char				*ft_itoa(int n);
char				**ft_strsplit(char const *s, char c);
char				*ft_strtrim(char const *s);
char				*ft_strjoin(const char *s1, const char *s2);
char				*ft_strsub(const char *s, unsigned int start, size_t len);
int					ft_strnequ(const char *s1, const char *s2, size_t n);
int					ft_strequ(const char *s1, const char *s2);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void				*ft_memset(void *b, int c, size_t len);
void				ft_bzero(void *s, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
size_t				ft_strlen(const char *s);
char				*ft_strdup(const char *s);
char				*ft_strcpy(char *dst, const char*src);
char				*ft_strncpy(char *dst, const char *src, size_t len);
char				*ft_strcat(char *dst, const char *src);
char				*ft_strncat(char *s1, const char *s2, size_t n);
size_t				ft_strlcat(char *s1, const char *s2, size_t n);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strstr(const char *big, const char *little);
char				*ft_strnstr(const char *big, const char *little,\
						size_t len);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_atoi(const char *str);
_Bool				ft_iswhitespaces(int c);
_Bool				ft_isalpha(int c);
_Bool				ft_isdigit(int c);
_Bool				ft_isalnum(int c);
_Bool				ft_isascii(int c);
_Bool				ft_isprint(int c);
_Bool				ft_isnumber(char *num);
int					ft_toupper(int c);
int					ft_tolower(int c);
void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);
char				*ft_strnew(size_t size);
void				ft_strdel(char **as);
void				ft_strclr(char *s);
void				ft_striter(char *s, void (*f)(char*));
void				ft_striteri(char *s, void (*f)(unsigned int, char*));
char				*ft_strmap(char const *s, char (*f)(char));
intmax_t			ft_pow(intmax_t num, int d);
void				*ft_realloc(void *ptr, size_t newsize);

#endif
