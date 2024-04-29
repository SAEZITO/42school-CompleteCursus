/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 13:08:01 by alsaez            #+#    #+#             */
/*   Updated: 2023/05/09 17:32:59 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <string.h>
# include <errno.h>
# include <mlx.h>
# include "../libft/libft.h"
# include <stdio.h>
# define IMG_SIZE					75
# define END_OF_GAME				2
# define SUCCESS					1
# define ERROR						0
# define ERROR_MALLOC				-2
# define ERROR_OPEN					-3
# define ERROR_INVALID_MAP			-4
# define ERROR_WALL					-5
# define ERROR_INVALID_MAP_PARAMS	-6
# define ERROR_MAP_SIZE				-7
# define ERROR_INVALID_SYMBOLS		-8
# define ERROR_USAGE				-9
# define ERROR_MLX					-10
# define ERROR_INVALID_COLLECT		-11
# define KEY_W						119
# define KEY_S						115
# define KEY_A						97
# define KEY_D						100
# define KEY_DOWN					65364
# define KEY_UP						65362
# define KEY_RIGHT					65363
# define KEY_LEFT					65361
# define KEY_ESC					65307

typedef struct s_game
{
	char	**map;
	char	**clone;
	char	*filename;
	int		map_width;
	int		map_height;
	int		collectible;
	int		player;
	int		end;
	int		nb_move;
	int		player_pos_x;
	int		player_pos_y;
	void	*mlx;
	void	*window;
	int		img_size;
	int		win_width;
	int		win_height;
	int		flag;
	int		flag2;
	void	*sprite_player_1;
	void	*sprite_player_2;
	void	*sprite_end;
	void	*sprite_collectible;
	void	*sprite_floor;
	void	*sprite_wall;
	void	*sprite_sith;
	void	*sprite_danger;

}	t_game;

// Initiate struct
void	ft_init_structure(t_game *game, char **argv);

// Open file :
int		ft_open_file(t_game *game);
int		ft_second_open(t_game *game, int i);

// Map checks :
int		ft_check_rectangle(t_game *game);
int		ft_check_symbol(t_game *game);
int		ft_check_wall(t_game *game);
int		ft_check_extension(t_game *game);
int		ft_subword(char *s, char *pattern);
int		ft_check_collectible(t_game *game, int i, int j);
int		ft_check_doable(t_game *game);

// Parsing :
int		ft_parse_xpm(t_game *game);

// Render & keys :
void	ft_render_img(t_game *game);
int		ft_event_key(int key_code, t_game *game);
void	ft_check_key(t_game *game, int x, int y);

// Exit
void	ft_free_map(t_game	*game);
void	ft_print_error(int err);
void	ft_exit(t_game *game, int err);

#endif
