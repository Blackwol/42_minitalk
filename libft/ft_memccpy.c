/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 14:14:16 by pcardoso          #+#    #+#             */
/*   Updated: 2020/02/01 12:49:42 by pcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			co;
	char			*dest;
	const char		*s;

	dest = dst;
	s = src;
	co = 0;
	while (co < n)
	{
		if ((char)c == s[co])
		{
			dest[co] = s[co];
			return (dst + co + 1);
		}
		dest[co] = s[co];
		co++;
	}
	return (NULL);
}
