/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zghouzla <zghouzla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 22:46:55 by zghouzla          #+#    #+#             */
/*   Updated: 2022/07/06 14:54:17 by zghouzla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"so_long.h"

void	generate_game(t_mlx *obj)
{
	obj->mlx = mlx_init();
	if (!(obj->mlx))
		ft_exit(3, obj);
	obj->win = mlx_new_window(obj->mlx, HEIGHT * obj->map.col, \
	WIDTH * obj->map.row, "so_long");
}

static void	put_player(t_mlx *obj, int i, int j)
{
	obj->player.x = i;
	obj->player.y = j;
	if (!obj->player.pos)
		mlx_put_image_to_window(obj->mlx, obj->win, obj->player.img_left,
			j * HEIGHT, i * WIDTH);
	else
		mlx_put_image_to_window(obj->mlx, obj->win, obj->player.img_right,
			j * HEIGHT, i * WIDTH);
}

void	put_exit(t_mlx *obj, int i, int j)
{
	if (obj->map.collectibles)
		mlx_put_image_to_window(obj->mlx, obj->win, obj->exit.img_c,
			j * HEIGHT, i * WIDTH);
	else
		mlx_put_image_to_window(obj->mlx, obj->win, obj->exit.img_n_c,
			j * HEIGHT, i * WIDTH);
}

static void	check_render(t_mlx *obj, int i, int j)
{
	if (obj->map.data[i][j] == '1')
		mlx_put_image_to_window(obj->mlx, obj->win, obj->wall,
			j * HEIGHT, i * WIDTH);
	if (obj->map.data[i][j] == '0')
		mlx_put_image_to_window(obj->mlx, obj->win, obj->background,
			j * HEIGHT, i * WIDTH);
	if (obj->map.data[i][j] == 'P')
		put_player(obj, i, j);
	if (obj->map.data[i][j] == 'C')
		mlx_put_image_to_window(obj->mlx, obj->win, obj->collectible,
			j * HEIGHT, i * WIDTH);
	if (obj->map.data[i][j] == 'E')
		put_exit(obj, i, j);
}

void	render_game(t_mlx *obj)
{
	int	i;
	int	j;

	mlx_clear_window(obj->mlx, obj->win);
	i = 0;
	while (i < obj->map.row)
	{
		j = 0;
		while (j < obj->map.col)
		{
			check_render(obj, i, j);
			j++;
		}
		i++;
	}
}
