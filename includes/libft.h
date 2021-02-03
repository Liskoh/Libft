/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjordan <hjordan@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 22:22:21 by hjordan           #+#    #+#             */
/*   Updated: 2021/02/03 15:17:28 by hjordan          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 32
#endif
# define GNL_LINE_READED 1
# define GNL_END_OF_FILE 0
# define GNL_FAILURE -1
# define MAX_FD 10240
# define END_OF_LINE '\n'
# define TRUE 1
# define FALSE 0

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include "limits.h"
# include "ft_printf.h"

typedef struct		s_list
{
	void				*content;
	struct s_list		*next;
}					t_list;

int					ft_atoi(const char *str);
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_isprint(int c);
size_t				ft_strlen(const char *str);
int					ft_tolower(int c);
int					ft_toupper(int c);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_itoa(int nb);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char *s, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putnbr_fd(int n, int fd);
void				*ft_memset(void *ptr, int value, size_t n);
void				ft_bzero(void *ptr, size_t n);
char				*ft_strchr(const char *s, int c);
size_t				ft_strlcpy(char *dest, const char *src, size_t size);
int					ft_lstsize(t_list *lst);
t_list				*ft_lstnew(void *content);
void				ft_lstadd_front(t_list **alst, t_list *new);
t_list				*ft_lstlast(t_list *lst);
void				ft_lstadd_back(t_list **alst, t_list *new);
void				*ft_memccpy(void *dest, const void *src, int c, size_t n);
void				*ft_memcpy(void *dest, const void *src, size_t n);
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strtrim(char const *s1, char const *set);
char				*ft_strrchr(const char *s, int c);
int					ft_strncmp(const char *s1, const char *s2, size_t len);
void				*ft_memmove(void *dest, const void *src, size_t n);
char				*ft_strdup(char *src);
char				*ft_strnstr(const char *big, const char *small, size_t len);
size_t				ft_strlcat(char *dst, char *src, size_t size);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
char				**ft_split(char const *s, char c);
void				*ft_calloc(size_t count, size_t size);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void				ft_lstdelone(t_list *lst, void (*del)(void *));
void				ft_lstclear(t_list **lst, void (*del)(void *));
void				ft_lstiter(t_list *lst, void (*f)(void *));
char				*ft_join_and_free(char *s1, char *s2);
int					get_next_line(int fd, char **line);
int					ft_addr_del(void **ptr);
int					ft_putchar(char c);
char				*ft_ltoa_base(long int n, char *base);
char				*ft_itoa_base(int n, char *base);
int					ft_str_del(char **str);
int					ft_putstr(const char *s);
int					ft_putchar(char c);
int					ft_printf(const char *str,
	...) __attribute__((format(printf,1,2)));
#endif
