/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 16:22:06 by alsaez            #+#    #+#             */
/*   Updated: 2023/03/22 12:40:11 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

char	*print_str(char *str, siginfo_t *info)
{
	ft_printf("%s\n", str);
	kill(info->si_pid, SIGUSR2);
	str = '\0';
	return (str);
}

char	*fill_str(char c, char *str)
{
	int		i;
	char	*res;

	i = 0;
	if (!str)
	{
		str = (char *)malloc(1 * sizeof(c) + 1);
		if (!str)
			return (NULL);
		str[i] = c;
		str[++i] = '\0';
		return (str);
	}
	res = (char *)malloc(1 * sizeof(c) + 1);
	if (!res)
		return (NULL);
	res[i] = c;
	res[++i] = '\0';
	res = ft_strjoin(str, res);
	free (str);
	return (res);
}

void	server_write(int sig, siginfo_t *info, void *context)
{
	static char	c = 0;
	static int	bit = -1;
	static char	*str = '\0';

	(void)context;
	if (kill(info->si_pid, 0) < 0)
	{
		ft_printf("ERROR : cant send sig to pid : %d\n", info->si_pid);
		exit(EXIT_FAILURE);
	}
	if (bit < 0 && !c)
		ft_printf("\nClient say : ");
	if (bit < 0)
		bit = __CHAR_BIT__ * sizeof(c) - 1;
	if (sig == SIGUSR1)
		c |= 1 << bit;
	else if (sig == SIGUSR2)
		c &= ~(1 << bit);
	if (!bit && c)
		str = fill_str(c, str);
	else if (!bit && !c)
		str = print_str(str, info);
	bit--;
	kill(info->si_pid, SIGUSR1);
}

int	main(void)
{
	struct sigaction		siga;

	siga.sa_sigaction = server_write;
	siga.sa_flags = SA_SIGINFO;
	sigemptyset(&siga.sa_mask);
	ft_printf("%d\n", getpid());
	while (1)
	{
		sigaction(SIGUSR1, &siga, 0);
		sigaction(SIGUSR2, &siga, 0);
	}
}
