/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcardoso <pcardoso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 07:39:03 by pcardoso          #+#    #+#             */
/*   Updated: 2022/02/20 06:09:27 by pcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <signal.h>
# include "../libft/libft.h"

typedef struct s_data {
	char	c;
	char	*message;
	int		client_pid;
}	t_data;

void	check_pid(char *pid);
char	*ft_strjoin_char(char *s1, char c);
void	handle_signal(int signum, siginfo_t *siginfo, void *unused);
void	handle_server_sig(int signum);
void	send_message(char *message, int pid);
void	send_byte(char byte, int pid);
void	print_signal_error(void);
void	print_pid(void);
void	alloc_message(int client_pid);
void	signal_error(char *error_msg);

#endif