/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_assetes.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zghouzla <zghouzla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 22:47:15 by zghouzla          #+#    #+#             */
/*   Updated: 2022/07/06 00:34:12 by zghouzla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	get_assets(t_mlx *obj)
{
	int	width;
	int	height;

	obj->wall = mlx_xpm_file_to_image(obj->mlx,
			"./images/wall.xpm", &width, &height);
	obj->background = mlx_xpm_file_to_image(obj->mlx,
			"./images/background.xpm", &width, &height);
	obj->collectible = mlx_xpm_file_to_image(obj->mlx,
			"./images/collec.xpm", &width, &height);
	obj->collectible1 = mlx_xpm_file_to_image(obj->mlx,
			"./images/collec1.xpm", &width, &height);
	obj->player.img_left = mlx_xpm_file_to_image(obj->mlx,
			"./images/player.xpm", &width, &height);
	obj->player.img_right = mlx_xpm_file_to_image(obj->mlx,
			"./images/player2.xpm", &width, &height);
	obj->exit.img_c = mlx_xpm_file_to_image(obj->mlx,
			"./images/closed_gate.xpm", &width, &height);
	obj->exit.img_n_c = mlx_xpm_file_to_image(obj->mlx,
			"./images/opened_gate.xpm", &width, &height);
	obj->enemy = mlx_xpm_file_to_image(obj->mlx,
			"./images/enemy.xpm", &width, &height);
}
