/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_xpm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 17:31:24 by alsaez            #+#    #+#             */
/*   Updated: 2023/05/09 17:35:28 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static int	ft_check_sprite(t_game *game)
{
	if (!game->sprite_end || !game->sprite_floor
		|| !game->sprite_player_1 || !game->sprite_wall
		|| !game->sprite_collectible || !game->sprite_player_2)
		ft_exit(game, ERROR_OPEN);
	return (SUCCESS);
}

int	ft_parse_xpm(t_game *game)
{
	game->img_size = IMG_SIZE;
	game->win_height = game->img_size * game->map_height;
	game->win_width = game->img_size * game->map_width;
	game->window = mlx_new_window(game->mlx, game->win_width,
			(game->win_height + 15), "so_long");
	game->sprite_end = mlx_xpm_file_to_image(game->mlx,
			"xpm/exit.xpm", &game->img_size, &game->img_size);
	game->sprite_floor = mlx_xpm_file_to_image(game->mlx,
			"xpm/ground.xpm", &game->img_size, &game->img_size);
	game->sprite_player_1 = mlx_xpm_file_to_image(game->mlx,
			"xpm/perso.xpm", &game->img_size, &game->img_size);
	game->sprite_player_2 = mlx_xpm_file_to_image(game->mlx,
			"xpm/perso2.xpm", &game->img_size, &game->img_size);
	game->sprite_wall = mlx_xpm_file_to_image(game->mlx,
			"xpm/wallll.xpm", &game->img_size, &game->img_size);
	game->sprite_collectible = mlx_xpm_file_to_image(game->mlx,
			"xpm/diamond_saphire.xpm", &game->img_size, &game->img_size);
	game->sprite_sith = mlx_xpm_file_to_image(game->mlx,
			"xpm/sith.xpm", &game->img_size, &game->img_size);
	game->sprite_danger = mlx_xpm_file_to_image(game->mlx,
			"xpm/sith_danger.xpm", &game->img_size, &game->img_size);
	return (ft_check_sprite(game));
}
