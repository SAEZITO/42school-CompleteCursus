/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 13:16:00 by alsaez            #+#    #+#             */
/*   Updated: 2023/05/02 13:16:05 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	ft_free_map(t_game *game)
{
	int	i;

	i = -1;
	if (game->map)
	{
		while (++i < game->map_height)
		{
			free(game->map[i]);
			free(game->clone[i]);
		}
		free(game->map);
		free(game->clone);
	}
}

void	ft_print_error(int err)
{
	if (err == ERROR_MALLOC)
		ft_putstr_fd("Error\nMALLOC_FAILED\n", 2);
	else if (err == ERROR_MLX)
		ft_putstr_fd("Error\nMLX_FAILED\n", 2);
	else if (err == ERROR_OPEN)
		ft_putstr_fd("Error\nOPEN_FAILED\n", 2);
	else if (err == ERROR_INVALID_MAP)
		ft_putstr_fd("Error\nINVALID_MAP\n", 2);
	else if (err == ERROR_WALL)
		ft_putstr_fd("Error\nINVALID_WALL\n", 2);
	else if (err == ERROR_INVALID_MAP_PARAMS)
		ft_putstr_fd("Error\nINVALID_MAP_PARAMS\n", 2);
	else if (err == ERROR_MAP_SIZE)
		ft_putstr_fd("Error\nINVALID_MAP_SIZE\n", 2);
	else if (err == ERROR_INVALID_SYMBOLS)
		ft_putstr_fd("Error\nERROR_INVALID_SYMBOLS\n", 2);
	else if (err == ERROR_USAGE)
		ft_putstr_fd("Error\nusage: ./so_long map.ber\n", 2);
	else if (err == ERROR_INVALID_COLLECT)
		ft_putstr_fd("Error\nYou can't finish the level\n", 2);
}

static void	ft_clean_sprite(t_game *game)
{
	if (game->sprite_floor)
		mlx_destroy_image(game->mlx, game->sprite_floor);
	if (game->sprite_end)
		mlx_destroy_image(game->mlx, game->sprite_end);
	if (game->sprite_wall)
		mlx_destroy_image(game->mlx, game->sprite_wall);
	if (game->sprite_collectible)
		mlx_destroy_image(game->mlx, game->sprite_collectible);
	if (game->sprite_player_1)
		mlx_destroy_image(game->mlx, game->sprite_player_1);
	if (game->sprite_player_2)
		mlx_destroy_image(game->mlx, game->sprite_player_2);
	if (game->sprite_sith)
		mlx_destroy_image(game->mlx, game->sprite_sith);
	if (game->sprite_danger)
		mlx_destroy_image(game->mlx, game->sprite_danger);
}

void	ft_exit(t_game *game, int err)
{
	ft_print_error(err);
	if (game)
	{
		if (game->map)
			ft_free_map(game);
		if (game->sprite_floor)
			ft_clean_sprite(game);
		if (game->window)
			mlx_destroy_window(game->mlx, game->window);
		if (game->mlx)
		{
			mlx_destroy_display(game->mlx);
			free(game->mlx);
		}
		free(game);
	}
	exit(0);
}
