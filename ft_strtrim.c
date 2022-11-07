/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brcaetan <brcaetan@42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:14:56 by brcaetan          #+#    #+#             */
/*   Updated: 2022/11/07 12:59:06 by brcaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *str, char const *set)
{
	int	i;
	int	len;

	if (!str || !set)
		return (NULL);
	i = 0;
	len = ft_strlen(str);
	while (str[i] && ft_strchr(set, str[i]))
		i++;
	while (len > i && ft_strchr(set, str[len]))
		len--;
	return (ft_substr(str, i, len - i + 1));
}
