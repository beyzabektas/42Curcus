/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebektas <bebektas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 11:31:19 by bebektas          #+#    #+#             */
/*   Updated: 2023/10/07 20:35:57 by bebektas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk_bonus.h"

static	void	received_signal(int sig)
{
	if (sig == SIGUSR1)
		write(1, "Signal Received\n", 16);
}

void	send_signal(int pid, char c)
{
	int	bit;

	bit = 7;
	while (bit >= 0)
	{
		if (c >> bit & 1)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(100);
		bit--;
	}
}

int	main(int argc, char **argv)
{
	int	pid;

	if (argc != 3)
	{
		write(1, "Check the arguments!", 20);
		return (1);
	}
	signal(SIGUSR1, received_signal);
	pid = ft_atoi(argv[1]);
	while (*argv[2])
		send_signal(pid, *(argv[2]++));
	send_signal(pid, '\n');
	send_signal(pid, '\0');
	usleep(100);
	return (0);
}
