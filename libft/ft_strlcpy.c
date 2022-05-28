/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 11:36:00 by pcardoso          #+#    #+#             */
/*   Updated: 2020/01/30 19:34:15 by pcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	count;

	count = 0;
	if (size == 0)
		return (ft_strlen(src));
	while ((src[count] != '\0') && (count < size - 1))
	{
		dst[count] = src[count];
		count++;
	}
	dst[count] = '\0';
	return (ft_strlen(src));
}
