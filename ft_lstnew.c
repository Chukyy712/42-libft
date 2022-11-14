/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brcaetan <brcaetan@42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 23:45:25 by brcaetan          #+#    #+#             */
/*   Updated: 2022/11/13 20:18:14 by brcaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*cont;

	cont = malloc(sizeof(t_list));
	if (!cont)
		return (NULL);
	cont->content = content;
	cont->next = NULL;
	return (cont);
}