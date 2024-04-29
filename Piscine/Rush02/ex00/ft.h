/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 01:31:29 by rstride           #+#    #+#             */
/*   Updated: 2022/11/20 22:58:59 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>

void	ft_show_file(void);
void	ft_set_error(void);
void	ft_prints(char *str);
void	ft_nul(char *num, char *dico);
void	ft_solve(char *str, char *dico);
void	ft_first(char *num, char *dico);
void	ft_third(char num[3], char *dico);
void	ft_second(char num[2], char *dico);
void	ft_nul2(char *dico, char *to_find);
void	ft_start_program(char *num, char *dico);
int		ft_error(int i);
int		ft_strlen(char *str);
int		ft_checkinput(char *num);
int		ft_check_hundred(char *str);
int		ft_handleten(char *num, char *line);
int		ft_search(char *num, int len, char *dico);
int		ft_check_unit(char *str, char *to_search);
int		ft_check_ten(char *str, char to_search[2]);
int		ft_check_except(char *str, char to_search[2]);
int		ft_insidesearch(char *num, int len, char *line);
char	*ft_cut_string(char *str);
char	*ft_atoi_str(char *str);
char	*ft_open_dico(char *filename);
char	*ft_strstr(char *str, char *to_find);

#endif
