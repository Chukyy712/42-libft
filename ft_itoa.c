/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brcaetan <brcaetan@42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:57:03 by brcaetan          #+#    #+#             */
/*   Updated: 2022/11/07 12:57:57 by brcaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nlen(int n)
{
	size_t	len;

	if (n == 0)
		return (1);
	len = 0;
	if (n < 0)
	{
		len++;
		n *= -1;
	}
	while (n > 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	long	nm;
	char	*str;

	nm = n;
	if (n < 0)
		nm *= -1;
	len = nlen(n);
	str = malloc((sizeof(char *)) * (len + 1));
	if (!str)
		return (NULL);
	if (n == 0)
		str[0] = '0';
	if (n < 0)
		str[0] = '-';
	str[len--] = '\0';
	while (nm > 0)
	{
		str[len--] = (nm % 10) + 48;
		nm /= 10;
	}
	return (str);
}
