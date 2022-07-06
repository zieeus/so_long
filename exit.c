/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zghouzla <zghouzla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 22:44:51 by zghouzla          #+#    #+#             */
/*   Updated: 2022/07/06 16:03:55 by zghouzla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	dstroy_img(t_mlx *obj)
{
	if (obj->wall)
		mlx_destroy_image(obj->mlx, obj->wall);
	if (obj->player.img_right)
		mlx_destroy_image(obj->mlx, obj->player.img_right);
	if (obj->player.img_left)
		mlx_destroy_image(obj->mlx, obj->player.img_left);
	if (obj->collectible)
		mlx_destroy_image(obj->mlx, obj->collectible);
	if (obj->background)
		mlx_destroy_image(obj->mlx, obj->background);
	if (obj->exit.img_c)
		mlx_destroy_image(obj->mlx, obj->exit.img_c);
	if (obj->exit.img_n_c)
		mlx_destroy_image(obj->mlx, obj->exit.img_n_c);
	if (obj->win)
		mlx_destroy_window(obj->mlx, obj->win);
}

static void	free_data(t_mlx *obj)
{
	int	i;

	i = 0;
	while (i < obj->map.row)
	{
		if (obj->map.data[i])
			free(obj->map.data[i]);
		i++;
	}
	if (obj->map.data)
		free(obj->map.data);
}

void	ft_exit(int error, t_mlx *obj)
{
	if (error == 0)
		ft_printf("Argument Error\n");
	if (error == 1)
		ft_printf("File Error\n");
	if (error == 2)
		ft_printf("Map Error\n");
	if (error == 3)
		ft_printf("Error init");
	if (error == 4)
		ft_printf("\nYou win\n");
	if (error == 5)
		ft_printf("\nYou lost\n");
	free_data(obj);
	dstroy_img(obj);
	exit(0);
}

int	destroy_notify(t_mlx *obj)
{
	(void)obj;
	exit(0);
	return (0);
}
