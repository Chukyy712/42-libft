/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brcaetan <brcaetan@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 20:22:13 by brcaetan          #+#    #+#             */
/*   Updated: 2022/11/08 20:54:00 by brcaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *str, int fd)
{
	int	i;

	if (!str || !fd)
		return ;
	i = -1;
	while (str[++i])
		write (fd, &str[i], 1);
}
