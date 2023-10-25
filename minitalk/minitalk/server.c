/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebektas <bebektas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 11:32:01 by bebektas          #+#    #+#             */
/*   Updated: 2023/10/07 19:37:54 by bebektas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	handle_signal(int signal)
{
	static int	bit = 128;
	static int	c = 0;

	if (signal == SIGUSR1)
		c += bit;
	bit /= 2;
	if (bit == 0)
	{
		write(1, &c, 1);
		bit = 128;
		c = 0;
	}
}

int	main(void)
{
	write(1, "PID:", 4);
	ft_putnbr(getpid());
	write(1, "\n", 1);
	signal(SIGUSR1, handle_signal);
	signal(SIGUSR2, handle_signal);
	while (1)
		pause();
}
