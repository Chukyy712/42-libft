/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brcaetan <brcaetan@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 17:57:16 by brcaetan          #+#    #+#             */
/*   Updated: 2022/10/16 17:57:21 by brcaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
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
