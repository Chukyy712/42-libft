/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brcaetan <brcaetan@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 17:57:16 by brcaetan          #+#    #+#             */
/*   Updated: 2022/10/30 01:37:06 by brcaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t len)
{
	size_t	i;
	size_t	j;

    i = 0;
	if (!find)
		return ((char *)str);
	while (str[i] && i < len)
	{
        j = 0;
		while (str[i + j] == find[j])
		{
			if (find[j + 1] == '\0')
				return ((char *)&(str[i]));
            j++;
		}
        i++;
	}
	return (NULL);
}
