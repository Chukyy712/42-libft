/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brcaetan <brcaetan@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 20:41:11 by brcaetan          #+#    #+#             */
/*   Updated: 2022/11/08 20:52:22 by brcaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void	ft_putnbr_fd(int nb, int fd)
{
	if (nb == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd('2', fd);
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb = -nb;
	}
	if (nb / 10)
		ft_putnbr_fd(nb / 10, fd);
	ft_putchar_fd(nb % 10 + '0', fd);
}