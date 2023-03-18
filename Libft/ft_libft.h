/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_libft.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeoshin <hyeoshin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 21:12:59 by sinhyeonho        #+#    #+#             */
/*   Updated: 2023/03/18 16:20:57 by hyeoshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIBFT_H
#define FT_LIBFT_H

#include <unistd.h>
#include <stdlib.h>

int				ft_isalpha(int c); //clear
int				ft_isdigit(int c); //clear
int				ft_isalnum(int c); //clear
int				ft_isascii(int c); //clear
int				ft_isprint(int c); //clear

int				ft_strlen(const char *s); //clear
void			*ft_memset(void *b, int c, size_t len); //clear
void			ft_bzero(void *s, size_t size); //clear
void			*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t len);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size); //clear
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size); //clear
int				ft_strncmp(char *s1, char *s2, unsigned int n); //clear

int				ft_toupper(int c); //clear
int				ft_tolower(int c); //clear
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);

void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
char			*ft_strnstr(const char *haystack, const char *needle, size_t len);
int				ft_atoi(const char *str);

void			*ft_calloc(size_t count, size_t size); //clear
char			*ft_strdup(char *src); //clear

char			*ft_substr(char const *s, unsigned int start, size_t len); //clear
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s1, char const *set);
char			**ft_split(char const *s, char c);
char			*ft_itoa(int n);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void			ft_striteri(char *s, void (*f)(unsigned int, char*));

void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);

#endif