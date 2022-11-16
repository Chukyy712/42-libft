/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brcaetan <brcaetan@42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 17:57:16 by brcaetan          #+#    #+#             */
/*   Updated: 2022/11/13 01:24:18 by brcaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*strs;
	unsigned char	*strd;

	strd = (unsigned char *)dest;
	strs = (unsigned char *)src;
	if (!strd && !strs)
		return (NULL);
	if (strd > strs)
	{
		while (n--)
			strd[n] = strs[n];
	}
	else
	{
		i = -1;
		while (++i < n)
			strd[i] = strs[i];
	}
	return (strd);
}
