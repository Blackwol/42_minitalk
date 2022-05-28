/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 13:41:00 by pcardoso          #+#    #+#             */
/*   Updated: 2020/01/31 17:55:28 by pcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t destsize)
{
	size_t	count_dst;
	size_t	county;
	size_t	count_src;

	county = 0;
	count_src = ft_strlen(src);
	count_dst = ft_strlen(dst);
	if (destsize < count_dst)
		return (count_src + destsize);
	while (src[county] && ((county + count_dst + 1) < destsize))
	{
		dst[count_dst + county] = src[county];
		county++;
	}
	dst[count_dst + county] = '\0';
	return (count_src + count_dst);
}
