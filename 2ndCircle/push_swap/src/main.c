/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez   <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 08:12:38 by alsaez            #+#    #+#             */
/*   Updated: 2023/04/26 09:16:13 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	st;

	if (argc >= 2)
	{
		if (!make_stackack(&st, argc, argv))
			w_error(&st);
		else
			make_index(&st);
		if (!is_sorted(&st) && st.len > 5)
			algo_clean(&st);
		else if (!is_sorted(&st) && st.len == 3)
			algo_nul(&st);
		else if (!is_sorted(&st) && st.len == 2)
			swap_a(&st, 0);
		else if (!is_sorted(&st) && (st.len == 4 || st.len == 5))
			algo_nul_reborn(&st);
		free(st.a);
		free(st.b);
		free(st.o);
	}
	return (0);
}
