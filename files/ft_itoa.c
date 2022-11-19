/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brcaetan <brcaetan@42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:57:03 by brcaetan          #+#    #+#             */
/*   Updated: 2022/11/16 18:58:44 by brcaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nlen(int nb)
{
	int	len;

	len = 0;
	if (nb < 0)
		len++;
	while (nb)
	{
		len++;
		nb = nb / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	long	num;
	char	*str;

	if (n == 0)
		return (ft_strdup("0"));
	num = n;
	len = nlen(n);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		num *= -1;
	}
	str[len--] = '\0';
	while (num)
	{
		str[len--] = (num % 10) + 48;
		num /= 10;
	}
	return (str);
}
