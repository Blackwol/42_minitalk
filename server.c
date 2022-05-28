/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcardoso <pcardoso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 07:38:39 by pcardoso          #+#    #+#             */
/*   Updated: 2022/02/20 06:10:17 by pcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./headers/minitalk.h"

t_data	g_data;

void	print_message(void)
{
	ft_putstr_fd(g_data.message, 1);
	ft_putstr_fd("\n", 1);
}

void	init_data(void)
{
	g_data.client_pid = 0;
	g_data.c = 0;
	return ;
}

void	alloc_message(int client_pid)
{
	g_data.client_pid = client_pid;
	g_data.message = ft_calloc(1, sizeof(char));
}

void	handle_signal(int signum, siginfo_t *siginfo, void *unused)
{
	static int	ascii = 0;
	static int	power = 0;

	(void)unused;
	if (g_data.client_pid != siginfo->si_pid)
		alloc_message(siginfo->si_pid);
	if (signum == SIGUSR1)
		ascii += (128 >> power);
	power += 1;
	if (power == 8)
	{
		g_data.c = ascii;
		g_data.message = ft_strjoin_char(g_data.message, ascii);
		if (g_data.c == '\0')
		{
			print_message();
			free(g_data.message);
		}
		power = 0;
		ascii = 0;
	}
	if (kill(g_data.client_pid, SIGUSR1) == -1)
		signal_error("Error sending signal to client\n");
	return ;
}

int	main(void)
{
	struct sigaction	sigac;

	init_data();
	sigemptyset(&sigac.sa_mask);
	sigaddset(&sigac.sa_mask, SIGINT);
	sigaddset(&sigac.sa_mask, SIGQUIT);
	sigac.sa_flags = SA_SIGINFO;
	sigac.sa_sigaction = handle_signal;
	if ((sigaction(SIGUSR1, &sigac, 0)) == -1)
		signal_error("Error sigaction\n");
	if ((sigaction(SIGUSR2, &sigac, 0)) == -1)
		signal_error("Error sigaction\n");
	ft_putstr_fd("PID: ", 1);
	ft_putnbr_fd(getpid(), 1);
	ft_putstr_fd("\n", 1);
	while (1)
	{
		sleep(5);
	}
	return (0);
}
