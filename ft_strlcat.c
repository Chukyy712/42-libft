/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brcaetan <brcaetan@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 17:57:16 by brcaetan          #+#    #+#             */
/*   Updated: 2022/10/16 17:57:21 by brcaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *d, const char *s, size_t size)
{
	size_t	i;
	size_t	lend;
	size_t	lens;

	lend = ft_strlen(d);
	i = 0;
	if (!size)
		return (ft_strlen(s));
	if (ft_strlen(d) > size)
		return (ft_strlen(s) + size);
	while (s[i] && (lend < size - 1))
		d[lend++] = s[i++];
	d[lend] = '\0';
	return (lend + ft_strlen(s));
}
