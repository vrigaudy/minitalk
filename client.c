/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 12:11:50 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/03/07 15:05:16 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static void	ft_send_char(char c, int pid)
{
	int	pow;
	int	ret;

	pow = 7;
	while (pow >= 0)
	{
		if ((c >> pow) & 1)
		{
			ret = kill(pid, SIGUSR2);
			usleep(70);
		}
		else
		{
			ret = kill(pid, SIGUSR1);
			usleep(70);
		}
		if (ret)
		{
			ft_printf("Error : Couldn't reach servor\n");
			exit(EXIT_FAILURE);
		}
		pow--;
		usleep(20);
	}
}	

static void	ft_check_error(int i, char *s1, char *s2)
{
	int	pid;
	int	len1;
	int	len2;

	pid = ft_atoi(s1);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	if (pid < 1 || pid > 99999 || len1 > 5 || len1 < 1 || len2 == 0 || i != 3)
	{
		ft_printf("ERROR : check and arguments and PID\n");
		exit(EXIT_FAILURE);
	}
	while (*s1)
	{
		if (*s1 < '0' || *s1 > '9')
		{
			ft_printf("ERROR : check and arguments and PID\n");
			exit(EXIT_FAILURE);
		}
		s1++;
	}
}

int	main(int ac, char **av)
{
	int	i;
	int	pid;

	i = 0;
	pid = ft_atoi(av[1]);
	ft_check_error(ac, av[1], av[2]);
	while (av[2][i])
	{
		ft_send_char(av[2][i], pid);
		i++;
	}
	ft_send_char('\0', pid);
	return (0);
}
