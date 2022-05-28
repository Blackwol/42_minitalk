/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 12:40:38 by pcardoso          #+#    #+#             */
/*   Updated: 2020/01/30 19:10:48 by pcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	int		c;

	c = ft_strlen(s1);
	ptr = malloc(sizeof(char) * (c + 1));
	if (!(ptr))
		return (NULL);
	while (c >= 0)
	{
		ptr[c] = (char)s1[c];
		c--;
	}
	return (ptr);
}
