/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 19:41:51 by pcardoso          #+#    #+#             */
/*   Updated: 2020/01/29 10:06:32 by pcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*aux;

	if (*lst)
	{
		aux = *lst;
		while (aux->next)
			aux = aux->next;
		new->next = aux->next;
		aux->next = new;
	}
	else
	{
		new->next = *lst;
		*lst = new;
	}
}
