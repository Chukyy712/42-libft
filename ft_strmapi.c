/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brcaetan <brcaetan@42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 08:39:23 by brcaetan          #+#    #+#             */
/*   Updated: 2022/11/08 12:58:47 by brcaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *str, char (*f)(unsigned int, char))
{
	int		i;
	char	*dst;

	if (!str || !f)
		return (NULL);
	dst = malloc(ft_strlen(str) + 1);
	if (!dst)
		return (NULL);
	i = -1;
	while (str[++i])
		dst[i] = f(i, str);
	dst[i] = '\0';
	return (dst);
}
