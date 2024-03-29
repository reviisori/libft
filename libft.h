/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: altikka <altikka@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:46:38 by altikka           #+#    #+#             */
/*   Updated: 2022/12/08 10:33:22 by altikka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdint.h>

# include "hashmap.h"
# include "vec.h"
# include "get_next_line.h"
# include "ft_printf.h"

typedef struct s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

void		ft_putchar(char c);
void		ft_putstr(char const *s);
void		ft_putendl(char const *s);
void		ft_putnbr(int n);
int			ft_atoi(char const *s);
size_t		ft_strlen(char const *s);
int			ft_strcmp(char const *s1, char const *s2);
int			ft_strncmp(char const *s1, char const *s2, size_t n);
char		*ft_strcpy(char *dst, char const *src);
char		*ft_strncpy(char *dst, char const *src, size_t n);
char		*ft_strdup(char const *src);
char		*ft_strcat(char *s1, char const *s2);
char		*ft_strncat(char *s1, char const *s2, size_t n);
size_t		ft_strlcat(char *dst, char const *src, size_t dstsize);
char		*ft_strchr(char const *s, int c);
char		*ft_strrchr(char const *s, int c);
char		*ft_strstr(char const *haystack, char const *needle);
char		*ft_strnstr(char const *haystack, char const *needle, size_t len);
void		*ft_memset(void *b, int c, size_t len);
void		ft_bzero(void *s, size_t n);
void		*ft_memcpy(void *dst, void const *src, size_t n);
void		*ft_memccpy(void *dst, void const *src, int c, size_t n);
void		*ft_memmove(void *dst, void const *src, size_t len);
void		*ft_memchr(void const *s, int c, size_t n);
int			ft_memcmp(void const *s1, void const *s2, size_t n);
int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);
int			ft_toupper(int c);
int			ft_tolower(int c);
void		*ft_memalloc(size_t size);
void		ft_memdel(void **ap);
char		*ft_strnew(size_t size);
void		ft_strdel(char **as);
void		ft_strclr(char *s);
void		ft_striter(char *s, void (*f)(char *));
void		ft_striteri(char *s, void (*f)(unsigned int, char *));
char		*ft_strmap(char const *s, char (*f)(char));
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int			ft_strequ(char const *s1, char const *s2);
int			ft_strnequ(char const *s1, char const *s2, size_t n);
char		*ft_strsub(char const *s, unsigned int start, size_t len);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strtrim(char const *s);
char		**ft_strsplit(char const *s, char c);
char		*ft_itoa(int n);
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char const *s, int fd);
void		ft_putendl_fd(char const *s, int fd);
void		ft_putnbr_fd(int n, int fd);

t_list		*ft_lstnew(void const *content, size_t content_size);
void		ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void		ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void		ft_lstadd(t_list **alst, t_list *new);
void		ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

int			ft_isspace(int c);
int			ft_intlen(int n);
int			ft_abs(int i);
int			ft_strncasecmp(char const *s1, char const *s2, size_t n);
char		*ft_strndup(char const *src, size_t len);
char		*ft_strnchr(char const *s, int c, size_t n);
char		*ft_strcasechr(char const *s, int c);
char		*ft_strcasestr(char const *haystack, char const *needle);
char		*ft_strrev(char *str);

int			ft_sqrt(int nb);

size_t		ft_anylen(uintmax_t n, int base, int sign);
char		*ft_anytoa(uintmax_t n, int base, int sign, int casing);
long		ft_pow(long x, long y);
long double	ft_powl(long double x, long double y);
int			ft_isinf(double x);

void		ft_strdelarr(char ***asa);
void		ft_memdelarr(void ***apa);

int			ft_isnbr(const char *str);
int			ft_isupper(int c);
size_t		ft_cntchr(const char *str, const char c);
size_t		ft_nbrlen(const char *src);
long		ft_atol(char const *s);

#endif
