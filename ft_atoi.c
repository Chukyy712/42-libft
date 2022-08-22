/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brcaetan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 22:51:51 by brcaetan          #+#    #+#             */
/*   Updated: 2022/08/06 09:09:50 by brcaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	sgn;
	int	res;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	sgn = 1;
	while (str[i] == '-' || str[i] == '+')
		sgn *= -1;
	while (str[i] >= '0' && str[i] <= '9')
		res = res * 10 + (str[i] - 48);
	return (res * sgn);
}
