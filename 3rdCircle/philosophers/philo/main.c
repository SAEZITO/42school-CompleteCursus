/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltressen <ltressen@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 10:35:57 by ltressen          #+#    #+#             */
/*   Updated: 2023/08/10 11:02:12 by ltressen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	is_dead(t_data *data)
{
	int		i;
	long	result;

	i = 0;
	while (i < data->num_of_phil)
	{
		rip_timer(data);
		if (data->d_statu)
		{
			pthread_mutex_lock(&data->print);
			result = get_time() - data->start_time;
			printf("%ld ms %d %s", result,
				data->phil[i].p_num + 1, " died 💀\n");
			pthread_mutex_unlock(&data->print);
			ft_exit(data);
			return (0);
		}
		i++;
	}
	return (1);
}

int	is_win(t_data *data)
{
	int		i;
	long	result;

	i = 0;
	result = 0;
	while (i < data->num_of_phil)
	{
		pthread_mutex_lock(&data->phil[i].meat_count);
		if (data->phil[i].eat_count >= data->win_con && data->win_con != 0)
			result++;
		pthread_mutex_unlock(&data->phil[i].meat_count);
		i++;
	}
	if (result == data->num_of_phil && data->win_con != 0)
	{
		data->d_statu = 1;
		printf("🤮🤮🤮 Too much spaghetti 🤮🤮🤮\n");
		ft_exit(data);
		return (0);
	}
	return (1);
}

void	ft_exit(t_data *data)
{
	int	i;

	i = 0;
	while (i < data->num_of_phil && data->num_of_phil > 1)
	{
		pthread_join(data->phil[i].th_id, NULL);
		i++;
	}
	free(data->phil);
	return ;
}

int	main(int argc, char **argv)
{
	t_data	data;

	if (argc == 5 || argc == 6)
		init_params(&data, argc, argv);
	else
	{
		printf("Usage: -number of philosophers -time_to_die");
		printf(" -time_to_eat -time_to_sleep -[number of times to eat]\n");
		return (0);
	}
	init_philos(&data);
	while (1 > 0)
	{
		if (!is_dead(&data))
			break ;
		if (!is_win(&data))
			break ;
	}
	return (0);
}
