/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 17:36:34 by pcardoso          #+#    #+#             */
/*   Updated: 2022/01/31 22:49:56 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char *s, char c)
{
	size_t		end;
	size_t		start;
	char		**result;
	int			count_array;
	int			count_s;

	count_array = 0;
	count_s = 0;
	result = (char **)ft_calloc(ft_strlen(s), sizeof(char *));
	if (result)
	{
		while (s[count_s])
		{
			while (s[count_s] && s[count_s] == c)
				count_s++;
			start = count_s;
			while (s[count_s] && s[count_s] != c)
				count_s++;
			end = count_s;
			if (start < end)
				result[count_array++] = ft_substr(s, start, (end - start));
		}
		free(s);
	}
	return (result);
}
