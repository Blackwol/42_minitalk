/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 19:36:14 by pcardoso          #+#    #+#             */
/*   Updated: 2020/01/25 15:14:51 by pcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char *s, unsigned int start, size_t len)
{
	size_t	c;
	char	*substr;

	c = 0;
	substr = malloc(sizeof(char) * len + 1);
	if (!(substr))
		return (NULL);
	if ((int)start > ft_strlen(s))
	{
		substr[c] = '\0';
		return (substr);
	}
	while (c < len && s[c + start])
	{
		substr[c] = s[c + start];
		c++;
	}
	substr[c] = '\0';
	return (substr);
}
