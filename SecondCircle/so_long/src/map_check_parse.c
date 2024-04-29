/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_check_parse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 14:21:13 by alsaez            #+#    #+#             */
/*   Updated: 2023/05/11 14:21:15 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static int	ft_return(t_game *game)
{
	if (game->player != 1 || game->end != 1 || game->collectible < 1)
		return (ERROR_INVALID_SYMBOLS);
	return (SUCCESS);
}

static void	ft_fill_struct(t_game *game, int i, int j)
{
	game->player_pos_x = i;
	game->player_pos_y = j;
	game->player++;
}

int	ft_check_symbol(t_game *game)
{
	int	i;
	int	j;

	i = -1;
	while (game->map[++i])
	{
		j = -1;
		while (game->map[i][++j])
		{
			if (game->map[i][j] == 'P')
				ft_fill_struct(game, i, j);
			else if (game->map[i][j] == 'E')
				game->end++;
			else if (game->map[i][j] == 'C')
				game->collectible++;
			else if (game->map[i][j] == 'X'
				&& ft_subword(game->filename, "bonus") == ERROR)
				return (ERROR_INVALID_SYMBOLS);
			else if (game->map[i][j] != '1' && game->map[i][j] != '0'
				&& game->map[i][j] != 'X')
				return (ERROR_INVALID_SYMBOLS);
		}
	}
	return (ft_return(game));
}

static int	ft_check_explore(t_game *game, int i, int j)
{
	static int	col = 0;

	if (i < 0 || j < 0 || !game->clone[i][j])
		return (-1);
	else if (game->clone[i][j] == '1' || game->clone[i][j] == 'F')
		return (-1);
	else if (game->clone[i][j] == '0' || game->clone[i][j] == 'E'
		|| game->clone[i][j] == 'P')
		game->clone[i][j] = 'F';
	else if (game->clone[i][j] == 'C')
	{
		game->clone[i][j] = 'F';
		col += 1;
	}
	ft_check_explore(game, (i + 1), j);
	ft_check_explore(game, (i - 1), j);
	ft_check_explore(game, i, (j + 1));
	ft_check_explore(game, i, (j - 1));
	return (col);
}

int	ft_check_doable(t_game *game)
{
	int		i;
	int		j;

	i = 0;
	ft_check_explore(game, game->player_pos_x, game->player_pos_y);
	while (i < game->map_height)
	{
		j = 0;
		while (j < game->map_width)
		{
			if (game->clone[i][j] == '0' || game->clone[i][j] == 'C'
				|| game->clone[i][j] == 'E')
				return (ERROR_INVALID_COLLECT);
			j++;
		}
		i++;
	}
	return (1);
}
