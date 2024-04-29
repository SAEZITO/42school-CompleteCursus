/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 16:33:48 by alsaez            #+#    #+#             */
/*   Updated: 2023/04/25 14:40:29 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static void	check_arg(t_stack *st)
{
	int		i;
	int		j;

	i = 0;
	while (i <= st->len - 2)
	{
		j = i + 1;
		while (j <= st->len - 1)
		{
			if (st->a[i] == st->a[j])
				w_error(st);
			j++;
		}
		i++;
	}
}

static void	make_stack2(t_stack *st, int argc, char **argv)
{
	st->len = argc -1;
	st->a = malloc(sizeof(int *) * argc - 1);
	st->b = ft_calloc((argc - 1), sizeof(int *));
	fill_a(st, argv);
}

int	make_stackack(t_stack *st, int argc, char **argv)
{
	char	**splitted;
	int		i;

	i = 0;
	if (argc == 2)
	{
		splitted = ft_split(argv[1], ' ');
		while (splitted[i])
			i++;
		st->len = i;
		st->a = malloc(sizeof(int *) * i);
		st->b = ft_calloc(i, sizeof(int *));
		fill_a_split(st, splitted);
	}
	else
		make_stack2(st, argc, argv);
	st->index = st->len;
	if (!st->a || !st->b)
		exit(EXIT_FAILURE);
	else
		check_arg(st);
	return (1);
}

void	fill_a(t_stack *st, char **argv)
{
	int	i;

	i = 0;
	while (argv[i + 1] != NULL)
	{
		if (check_arg2(argv[i + 1]) && check_intmax(argv[i + 1]))
		{
			st->a[i] = ft_atoi(argv[i + 1]);
			i++;
		}
		else
			w_error(st);
	}
}

void	fill_a_split(t_stack *st, char **splitted)
{
	int	i;

	i = 0;
	while (splitted[i])
	{
		if (check_arg2(splitted[i]) && check_intmax(splitted[i]))
		{
			st->a[i] = ft_atoi(splitted[i]);
			free(splitted[i]);
			i++;
		}
		else
		{	
			free(splitted[i]);
			free(splitted);
			w_error(st);
		}
	}
	free(splitted);
}
