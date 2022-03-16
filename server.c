/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 12:12:14 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/03/04 11:38:12 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static void	ft_handler(int sig, siginfo_t *siginfo, void *context)
{
	static char	str[INT_MAX];
	static int	i = 0;
	static int	pow = 8;

	(void)siginfo;
	(void)context;
	if (sig == SIGUSR1 || sig == SIGUSR2)
	{
		str[i] = str[i] << 1;
		if (sig == SIGUSR2)
			str[i]++;
		pow--;
	}
	if (pow == 0)
	{
		pow = 8;
		if (str[i] == 0 || i == INT_MAX - 1)
		{
			ft_printf("YOUR MESSAGE IS : %s\n", str);
			i = 0;
		}
		else
			i++;
	}
}

int	main(void)
{
	struct sigaction	sa;

	sa.sa_sigaction = &ft_handler;
	sa.sa_flags = SA_RESTART;
	ft_printf("PID of the server : %d\n", getpid());
	sigaction(SIGUSR1, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);
	while (1)
	{
		pause();
	}
	return (0);
}
