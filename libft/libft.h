/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zghouzla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 20:14:18 by zghouzla          #+#    #+#             */
/*   Updated: 2021/11/27 02:27:48 by zghouzla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
/*
#include <fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
*/
int		ft_atoi(const char *c);
int		ft_isalpha(int a);
int		ft_isprint(int a);
void	*ft_memset(void *src, int value, size_t size);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
char	*ft_strrchr(const char *s, int c);
void	ft_bzero(void *s, size_t n);
int		ft_isascii(int a);
void	*ft_memcpy(void *dest, const void *src, size_t len);
char	*ft_strchr(const char *str, int c);
size_t	ft_strlen(const char *str);
int		ft_tolower(int c);
int		ft_isalnum(int a);
int		ft_isdigit(int a);
void	*ft_memmove(void *dst, const void *src, size_t len);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_toupper(int c);
void	*ft_calloc(size_t count, size_t size);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strdup(const char *s1);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_itoa(int n);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
char	**ft_split(char const *s, char c);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

#endif
