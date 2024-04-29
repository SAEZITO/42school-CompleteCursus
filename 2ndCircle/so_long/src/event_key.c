/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   event_key.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 17:34:17 by alsaez            #+#    #+#             */
/*   Updated: 2023/05/09 17:34:20 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_print_msg(int i)
{
	if (i == 1)
	{
		printf("--------------------------------");
		printf("\n---------|| YOU  WON ||---------\n");
		printf("\n Jedi recovered all the diamonds \n");
		printf("--------------------------------\n");
	}
	if (i == 2)
	{
		printf("------------------------------------------");
		printf("\n-------------|| GAME  OVER ||-------------\n");
		printf("\n----- Jedi died killed by a sith :'( -----\n");
		printf("------------------------------------------\n");
	}
}

static void	ft_check_symbols(t_game *game, int x, int y)
{
	if (game->map[x][y] == 'E' && game->collectible != 0)
		game->flag2 = 1;
	else if (game->map[x][y] == 'C')
		game->collectible--;
	else if (game->collectible == 0 && game->map[x][y] == 'E')
	{
		ft_print_msg(1);
		ft_exit(game, END_OF_GAME);
	}
	if ((game->map[x][y] == '0' || game->map[x][y] == 'C')
		&& game->flag2 == 1)
	{
		game->flag2 = 0;
		game->map[x][y] = 'P';
		game->map[game->player_pos_x][game->player_pos_y] = 'E';
	}
	else
	{
		game->map[x][y] = 'P';
		game->map[game->player_pos_x][game->player_pos_y] = '0';
	}
	game->player_pos_x = x;
	game->player_pos_y = y;
	game->nb_move++;
	ft_printf("%d\n", game->nb_move);
}

void	ft_check_key(t_game *game, int x, int y)
{
	if (game->map[x][y] == '0' || game->map[x][y] == 'C'
	|| game->map[x][y] == 'E')
		ft_check_symbols(game, x, y);
	if (game->map[x][y] == 'X' && (ft_subword(game->filename, "bonus")
	== SUCCESS))
	{
		ft_print_msg(2);
		ft_exit(game, END_OF_GAME);
	}
}

int	ft_event_key(int key_code, t_game *game)
{
	char			*printed_moves;

	if (key_code == KEY_W || key_code == KEY_UP)
		ft_check_key(game, game->player_pos_x - 1, game->player_pos_y);
	else if (key_code == KEY_S || key_code == KEY_DOWN)
		ft_check_key(game, game->player_pos_x + 1, game->player_pos_y);
	else if (key_code == KEY_A || key_code == KEY_LEFT)
	{
		if (game->flag != 0)
			game->flag = 0;
		ft_check_key(game, game->player_pos_x, game->player_pos_y - 1);
	}
	else if (key_code == KEY_D || key_code == KEY_RIGHT)
	{
		if (game->flag == 0)
			game->flag = 1;
		ft_check_key(game, game->player_pos_x, game->player_pos_y + 1);
	}
	else if (key_code == KEY_ESC)
		ft_exit(game, END_OF_GAME);
	ft_render_img(game);
	printed_moves = ft_itoa(game->nb_move);
	if (!(printed_moves))
		ft_exit(game, ERROR_MALLOC);
	return (free(printed_moves), SUCCESS);
}
