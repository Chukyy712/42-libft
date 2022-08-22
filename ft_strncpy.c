/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brcaetan <brcaetan@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 11:04:01 by brcaetan          #+#    #+#             */
/*   Updated: 2022/08/17 14:25:59 by brcaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char *ft_strncpy(char *dest, const char *src, size_t len)
{
	size_t i;

	i = 0;
	if (src[0] == '\0')
		return (0);
	while (src[i] != '\0' && i < len)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < len)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int	main(void)
{
	char dst[100];
	char *src = "campainha";

	printf ("dest: %s \n", ft_strncpy(dst, src, 5));
//	printf ("dest: %s \n", strncpy(dst, src, 5));

}
