/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez   <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 10:37:20 by alsaez            #+#    #+#             */
/*   Updated: 2023/04/27 16:18:46 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cpush_swap.h"

void	quick_free(t_stack *st, char *str)
{
	ft_printf("Is not a valid comand : %s", str);
	write (1, "Error\n", 6);
	free(st->a);
	free(st->b);
	free(st->o);
	free(str);
	exit(EXIT_FAILURE);
}

int	check_sort(t_stack *st)
{
	int	i;

	i = 0;
	while (i <= st->index - 1)
	{
		if (st->a[i] == st->o[i])
			i++;
		else
			return (write(1, "KO\n", 3));
	}
	return (write(1, "OK\n", 3));
}

void	exec(t_stack *st, char *line)
{
	if (!(ft_strncmp(line, "sa\n", ft_strlen(line))))
		swap_a(st);
	else if (!(ft_strncmp(line, "sb\n", ft_strlen(line))))
		swap_b(st);
	else if (!(ft_strncmp(line, "ss\n", ft_strlen(line))))
		sswap(st);
	else if (!(ft_strncmp(line, "pa\n", ft_strlen(line))))
		push_a(st);
	else if (!(ft_strncmp(line, "pb\n", ft_strlen(line))))
		push_b(st);
	else if (!(ft_strncmp(line, "ra\n", ft_strlen(line))))
		rotate_a(st);
	else if (!(ft_strncmp(line, "rb\n", ft_strlen(line))))
		rotate_b(st);
	else if (!(ft_strncmp(line, "rr\n", ft_strlen(line))))
		ra_rb(st);
	else if (!(ft_strncmp(line, "rra\n", ft_strlen(line))))
		r_rotate_a(st);
	else if (!(ft_strncmp(line, "rrb\n", ft_strlen(line))))
		r_rotate_b(st);
	else if (!(ft_strncmp(line, "rrr\n", ft_strlen(line))))
		r_ra_rb(st);
	else
		quick_free(st, line);
}

int	main(int argc, char **argv)
{
	t_stack	st;
	char	*str;

	if (!make_stackack(&st, argc, argv))
		return (0);
	else
		make_index(&st);
	str = "osef";
	while (str != 0)
	{	
		str = get_next_line2(0);
		if (str)
			exec(&st, str);
		free (str);
	}
	check_sort(&st);
	free(st.a);
	free(st.b);
	free(st.o);
	return (0);
}
