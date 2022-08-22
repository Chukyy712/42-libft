/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brcaetan <brcaetan@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 11:10:51 by brcaetan          #+#    #+#             */
/*   Updated: 2022/08/09 14:00:00 by brcaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	unsigned int	chr;

	chr = c;
	if ((chr >= 'a' && chr <= 'z') || (chr >= 'A' && chr <= 'Z')
		|| (chr >= '0' && chr <= '9'))
		return (1);
	return (0);
}
