/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brcaetan <brcaetan@42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 17:57:16 by brcaetan          #+#    #+#             */
/*   Updated: 2022/11/07 12:59:10 by brcaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	size_t	i;
	char	*substr;

	i = -1;
	if (!str)
		return (NULL);
	if (start >= ft_strlen(str))
		return (ft_strdup(""));
	substr = (char *) malloc(len + 1);
	if (!substr)
		return (NULL);
	while (++i < len)
		substr[i] = str[start + i];
	substr[i] = '\0';
	return (substr);
}
