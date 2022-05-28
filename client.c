/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcardoso <pcardoso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 07:38:18 by pcardoso          #+#    #+#             */
/*   Updated: 2022/02/20 06:16:15 by pcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./headers/minitalk.h"

int	g_flag_server_sig;

void	print_signal_error(void)
{
	ft_putstr_fd("Error sending signal to server.\n", 1);
	exit(0);
}

void	send_byte(char byte, int pid)
{
	unsigned char	bit;

	bit = 128;
	while (bit)
	{
		if (g_flag_server_sig == 1)
		{
			g_flag_server_sig = 0;
			if (bit & byte)
			{
				if (kill(pid, SIGUSR1) == -1)
					print_signal_error();
			}
			else
			{
				if (kill(pid, SIGUSR2) == -1)
					print_signal_error();
			}
			bit >>= 1;
			usleep (2500);
		}
	}
	return ;
}

void	handle_server_sig(int signum)
{
	g_flag_server_sig = 1;
	(void)(signum);
	return ;
}

void	send_message(char *message, int pid)
{
	while (*message)
	{
		send_byte(*message, pid);
		message++;
	}
	send_byte('\0', pid);
	return ;
}

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		ft_putstr_fd("Usage: [pid] [message]\n", 1);
		return (0);
	}
	g_flag_server_sig = 1;
	signal(SIGUSR1, handle_server_sig);
	check_pid(argv[1]);
	send_message(argv[2], ft_atoi(argv[1]));
	return (0);
}
