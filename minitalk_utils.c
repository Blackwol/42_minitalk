/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcardoso <pcardoso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 07:38:35 by pcardoso          #+#    #+#             */
/*   Updated: 2022/02/20 06:09:11 by pcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./headers/minitalk.h"

void	signal_error(char *error_msg)
{
	ft_putstr_fd(error_msg, 1);
	exit(0);
}

void	check_pid(char *pid)
{
	while (*pid)
	{
		if (ft_isdigit(*pid))
			pid++;
		else
		{
			ft_putstr_fd("First argument must contain only numbers.\n", 1);
			exit(0);
		}
	}
	return ;
}

char	*ft_strjoin_char(char *s1, char c)
{
	char	*ptr;
	int		i;

	ptr = malloc((ft_strlen(s1) + 2) * (sizeof(char)));
	if (!(ptr))
		return (NULL);
	i = 0;
	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	ptr[i] = c;
	ptr[i + 1] = '\0';
	free(s1);
	return (ptr);
}
