/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brcaetan <brcaetan@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 15:27:06 by brcaetan          #+#    #+#             */
/*   Updated: 2022/11/07 19:09:56 by brcaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wc(char *str, char c)
{
	int	i;
	int	j;

	i = -1;
	j = 0;
	if (!str)
		return (0);
	while (str[++i])
	{
		if (str[i] != c && (str[i + 1] == c || str[i + 1] == '\0'))
			j++;
	}
	return (j);
}

char	**ft_split(char const *src, char c)
{
	int		i;
	int		j;
	int		k;
	int		wc;
	char	**str;

	if (!src)
		return (NULL);
	wc = ft_wc((char *)src, c);
	str = (char **) malloc(sizeof(char *) * (wc + 1));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (src[i] && j <= wc - 1)
	{
		while (src[i] == c && src[i])
			i++;
		k = i;
		while (src[i] != c && src[i])
			i++;
		str[j++] = ft_substr(src, k, i - k);
	}
	str[wc] = 0;
	return (str);
}
