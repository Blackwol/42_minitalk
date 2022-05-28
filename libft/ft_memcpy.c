/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 18:10:11 by pcardoso          #+#    #+#             */
/*   Updated: 2020/02/01 11:03:37 by pcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	c;
	char	*p;

	p = dst;
	c = 0;
	if (!dst && !src && n)
		return (NULL);
	while (c < n)
	{
		p[c] = ((const char *)src)[c];
		c++;
	}
	return (dst);
}
