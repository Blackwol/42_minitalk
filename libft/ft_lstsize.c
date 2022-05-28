/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 19:21:29 by pcardoso          #+#    #+#             */
/*   Updated: 2020/01/28 19:27:15 by pcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*aux;

	aux = lst;
	count = 0;
	while (aux)
	{
		count++;
		aux = aux->next;
	}
	return (count);
}
