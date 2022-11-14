/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brcaetan <brcaetan@42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 17:57:16 by brcaetan          #+#    #+#             */
/*   Updated: 2022/11/14 12:26:46 by brcaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

int					ft_atoi(const char *str);

int					ft_isalpha(int c);

int					ft_isascii(int c);

int					ft_isdigit(int c);

int					ft_isprint(int c);

int					ft_isalnum(int c);

char				*ft_strchr(const char *str, int c);

size_t				ft_strlen(const char *str);

char				*ft_strncpy(char *dest, const char *src, size_t len);

int					ft_tolower(int c);

int					ft_toupper(int c);

char				*ft_strdup(const char *s);

size_t				ft_strlcpy(char *dest, const char *src, size_t len);

void				ft_bzero(void *str, size_t n);

void				*ft_calloc(size_t nmemb, size_t size);

void				*ft_memcpy(void *dest, const void *src, size_t n);

void				*ft_memset(void *s, int c, size_t n);

void				*ft_memmove(void *dest, const void *src, size_t n);

void				*ft_memchr(const void *src, int c, size_t n);

int					ft_memcmp(const void *s1, const void *s2, size_t n);

int					ft_strncmp(const char *s1, const char *s2, size_t n);

char				*ft_strrchr(const char *s, int c);

char				*ft_strnstr(const char *big, const char *little,
						size_t len);

size_t				ft_strlcat(char *d, const char *s, size_t size);

char				*ft_substr(char const *str, unsigned int start, size_t len);

char				*ft_strjoin(char const *str1, char const *str2);

char				*ft_strtrim(char const *str, char const *set);

char				**ft_split(char const *src, char c);

char				*ft_itoa(int n);

char				*ft_strmapi(char const *str, char (*f)(unsigned int, char));

void				ft_striteri(char *str, void (*f)(unsigned int, char *));

void				ft_putchar_fd(char c, int fd);

void				ft_putstr_fd(char *str, int fd);

void				ft_putendl_fd(char *str, int fd);

void				ft_putnbr_fd(int nb, int fd);

#endif
