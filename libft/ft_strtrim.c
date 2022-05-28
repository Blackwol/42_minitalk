/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 20:08:51 by pcardoso          #+#    #+#             */
/*   Updated: 2020/01/27 20:31:44 by pcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	contains(char s, char const *set)
{
	int	c;

	c = 0;
	while (set[c])
	{
		if (set[c] == s)
			return (1);
		c++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	int		index;
	int		count;

	count = 0;
	index = 0;
	ptr = (char *)s1;
	while (contains(ptr[index], set))
		ptr = ptr + 1;
	if (!ptr)
		return (ptr);
	index = ft_strlen(ptr) - 1;
	while (ft_strlen(ptr) && contains(ptr[index--], set))
		count++;
	ptr = ft_substr(ptr, 0, ft_strlen(ptr) - count);
	return (ptr);
}
