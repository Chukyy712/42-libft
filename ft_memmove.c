/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brcaetan <brcaetan@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 17:57:16 by brcaetan          #+#    #+#             */
/*   Updated: 2022/10/27 09:48:29 by brcaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*strs;
	unsigned char	*strd;

	i = -1;
	strd = (unsigned char *)dest;
	strs = (unsigned char *)src;
	if (!strd && !strs)
		return (0);
	if (strd > strs)
	{
		while (n--)
			strd[n] = strs[n];
	}
	else
	{
		while (++i < n)
			strd[i] = strs[i];
	}
	return (strd);
}
