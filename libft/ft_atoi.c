/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 16:00:03 by pcardoso          #+#    #+#             */
/*   Updated: 2020/01/31 16:56:00 by pcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	if (c == ' ' || c == '\n' || c == '\t'
		|| c == '\v' || c == '\f' || c == '\r')
		return (1);
	else
		return (0);
}

static int	is_negative(char c)
{
	if (c == 45)
		return (-1);
	else
		return (1);
}

int	ft_atoi(const char *str)
{
	int	count;
	int	res;
	int	negative;

	negative = 1;
	res = 0;
	count = 0;
	while (ft_isspace(str[count]))
		count++;
	if (str[count] == '-' || str[count] == '+')
	{
		negative = is_negative(str[count]);
		count++;
	}
	while (str[count] >= 48 && str[count] <= 57)
	{
		res = res * 10;
		res = res + (str[count] - 48);
		count++;
	}
	return (res * negative);
}
