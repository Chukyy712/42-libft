/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brcaetan <brcaetan@42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 17:57:16 by brcaetan          #+#    #+#             */
/*   Updated: 2022/11/16 18:34:14 by brcaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	size_t	i;
	size_t	sublen;
	char	*substr;

	if (!str)
		return (NULL);
	if (start > ft_strlen(str))
		return (ft_strdup(""));
	sublen = ft_strlen((char *)&str[start]);
	if (len > sublen)
		len = sublen;
	substr = (char *) malloc(len + 1);
	if (!substr)
		return (NULL);
	i = -1;
	while (++i < len && str[start])
		substr[i] = str[start + i];
	substr[i] = '\0';
	return (substr);
}
