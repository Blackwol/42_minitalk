/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 19:54:27 by pcardoso          #+#    #+#             */
/*   Updated: 2020/01/25 15:21:26 by pcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char *s1, char const *s2)
{
	char	*ptr;
	int		c1;
	int		c2;

	ptr = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * (sizeof(char)));
	if (!(ptr))
		return (NULL);
	c1 = 0;
	c2 = 0;
	while (s1[c1])
	{
		ptr[c1] = s1[c1];
		c1++;
	}
	while (s2[c2])
	{
		ptr[c1] = s2[c2];
		c1++;
		c2++;
	}
	ptr[c1] = '\0';
	free(s1);
	return (ptr);
}
