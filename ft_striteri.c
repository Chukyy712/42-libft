/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brcaetan <brcaetan@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 18:40:50 by brcaetan          #+#    #+#             */
/*   Updated: 2022/11/08 18:57:57 by brcaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *str, void (*f)(unsigned int, char*))
{
	int		i;

	if (!str || !f)
		return ;
	i = -1;
	while (str[++i])
		f(i, &str[i]);
}
