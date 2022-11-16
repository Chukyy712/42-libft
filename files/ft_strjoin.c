/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brcaetan <brcaetan@42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 14:36:23 by brcaetan          #+#    #+#             */
/*   Updated: 2022/11/07 12:58:36 by brcaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *str1, char const *str2)
{
	size_t	i;
	size_t	j;
	char	*strjoin;

	i = -1;
	j = -1;
	if (!str1 || !str2)
		return (NULL);
	strjoin = (char *) malloc((ft_strlen(str1) + ft_strlen(str2)) + 1);
	if (!strjoin)
		return (NULL);
	while (str1[++i])
		strjoin[i] = str1[i];
	while (str2[++j])
	{
		strjoin[i] = str2[j];
		i++;
	}
	strjoin[i] = '\0';
	return (strjoin);
}
