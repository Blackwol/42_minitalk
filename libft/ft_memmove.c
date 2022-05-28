/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 15:28:58 by pcardoso          #+#    #+#             */
/*   Updated: 2020/02/01 12:19:54 by pcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*p;
	const char	*s;

	p = dst;
	s = src;
	if (p > s)
	{
		while (len)
		{
			p[len - 1] = s[len - 1];
			len--;
		}
	}
	else
		ft_memcpy(p, s, len);
	return (dst);
}
