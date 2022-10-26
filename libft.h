/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brcaetan <brcaetan@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 17:57:16 by brcaetan          #+#    #+#             */
/*   Updated: 2022/10/16 17:57:21 by brcaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stdio.h>

int			ft_atoi(const char *str);

int			ft_isalpha(int c);

int	    	ft_isascii(int c);

int	    	ft_isdigit(int c);

int         ft_isprint(int c);

int	    	ft_isalnum(int c);

char		*ft_strchr(const char *str, int c);

size_t      ft_strlen(const char *str);

char		*ft_strncpy(char *dest, const char *src, size_t len);

int			ft_tolower(int c);

int	        ft_toupper(int c);

char		*ft_strdup(const char *s);

size_t	    ft_strlcpy(char *dest, const char *src, size_t len);

void		ft_bzero(void *str, size_t n);

void		*ft_calloc(size_t nmemb, size_t size);

void		*ft_memcpy(void *dest, const void *src, size_t n);

void		*ft_memset(void *s, int c, size_t n);

#endif
