/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 15:46:50 by pcardoso          #+#    #+#             */
/*   Updated: 2020/02/01 11:50:34 by pcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int				index;
	const char		*new_s;

	new_s = s;
	index = -1;
	while (n--)
	{
		index++;
		if (*new_s++ == c)
			return ((void *)s + index);
	}
	return (NULL);
}
