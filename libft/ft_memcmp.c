/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 16:41:08 by pcardoso          #+#    #+#             */
/*   Updated: 2020/01/30 19:02:43 by pcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	c;
	int		res;

	res = 0;
	c = 0;
	if (!n)
		return (0);
	while (((unsigned char *)s1)[c] == ((unsigned char *)s2)[c] && n - 1 > c)
		c++;
	res = ((unsigned char *)s1)[c] - ((unsigned char *)s2)[c];
	return (res);
}
