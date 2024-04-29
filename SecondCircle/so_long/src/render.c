/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 17:34:02 by alsaez            #+#    #+#             */
/*   Updated: 2023/05/09 17:34:05 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_choice_player(t_game *game, int i, int j)
{
	if (game->map[i + 1][j] == 'P' || game->map[i - 1][j] == 'P'
	|| game->map[i][j + 1] == 'P' || game->map[i][j - 1] == 'P')
		return (1);
	return (0);
}

static void	ft_render_sprites(t_game *game, int i, int j)
{
	if (game->map[i][j] == '0')
		mlx_put_image_to_window(game->mlx, game->window,
			game->sprite_floor, IMG_SIZE * j, ((IMG_SIZE * i) + 20));
	else if (game->map[i][j] == 'P' && (game->flag == 0))
		mlx_put_image_to_window(game->mlx, game->window,
			game->sprite_player_1, IMG_SIZE * j, ((IMG_SIZE * i) + 20));
	else if (game->map[i][j] == 'P' && (game->flag != 0))
		mlx_put_image_to_window(game->mlx, game->window,
			game->sprite_player_2, IMG_SIZE * j, ((IMG_SIZE * i) + 20));
	else if (game->map[i][j] == '1')
		mlx_put_image_to_window(game->mlx, game->window,
			game->sprite_wall, IMG_SIZE * j, ((IMG_SIZE * i) + 20));
	else if (game->map[i][j] == 'C')
		mlx_put_image_to_window(game->mlx, game->window,
			game->sprite_collectible, IMG_SIZE * j, ((IMG_SIZE * i) + 20));
	else if (game->map[i][j] == 'E')
		mlx_put_image_to_window(game->mlx, game->window,
			game->sprite_end, IMG_SIZE * j, ((IMG_SIZE * i) + 20));
	else if (game->map[i][j] == 'X' && !ft_choice_player(game, i, j))
		mlx_put_image_to_window(game->mlx, game->window,
			game->sprite_danger, IMG_SIZE * j, ((IMG_SIZE * i) + 20));
	else if (game->map[i][j] == 'X' && ft_choice_player(game, i, j))
		mlx_put_image_to_window(game->mlx, game->window,
			game->sprite_sith, IMG_SIZE * j, ((IMG_SIZE * i) + 20));
}

void	ft_render_img(t_game *game)
{
	static char	*str = "Nombre de mouvements: ";
	char		*printed_moves;
	int			i;
	int			j;

	mlx_clear_window(game->mlx, game->window);
	i = -1;
	while (game->map[++i])
	{
		j = -1;
		while (game->map[i][++j])
			ft_render_sprites(game, i, j);
	}
	printed_moves = ft_itoa(game->nb_move);
	mlx_string_put(game->mlx, game->window, 0, 12, 914254, str);
	mlx_string_put(game->mlx, game->window, 130, 12, 914254, printed_moves);
	free(printed_moves);
}
