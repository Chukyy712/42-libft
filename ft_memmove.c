/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brcaetan <brcaetan@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 17:57:16 by brcaetan          #+#    #+#             */
/*   Updated: 2022/10/16 17:57:21 by brcaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*strs;
	unsigned char	*strd;

	i = -1;
	if (!src || !dest)
		return (NULL);
	strs = (unsigned char *)src;
	strd = (unsigned char *)dst;
	if (strd > strs)
	{
		while(str[q])
	}
	else
	{
		while (++i < n)
			strd[i] = strs[i];
	}
}
