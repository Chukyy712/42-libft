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

<<<<<<< HEAD
void	*ft_memmove(void *dst, const void *src, size_t n)
=======
void	*ft_memmove(void *dest, const void *src, size_t n)
>>>>>>> 61dff75 (bugfixes)
{
	size_t			i;
	unsigned char	*strs;
	unsigned char	*strd;

	i = -1;
<<<<<<< HEAD
	if (!src || !dest)
		return (NULL);
	strs = (unsigned char *)src;
	strd = (unsigned char *)dst;
	if (strd > strs)
	{
		while(str[q])
=======
	strd = (unsigned char *)dest;
	strs = (unsigned char *)src;
	if (!strd || !strs)
		return (0);
	if (strd > strs)
	{
		while (0 < n--)
			strd[n] = strs[n];
>>>>>>> 61dff75 (bugfixes)
	}
	else
	{
		while (++i < n)
<<<<<<< HEAD
			strd[i] = strs[i];
	}
=======
			strd[i] = strd[i];
	}
	return (dest);
>>>>>>> 61dff75 (bugfixes)
}
