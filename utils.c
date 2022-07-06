/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zghouzla <zghouzla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 22:58:44 by zghouzla          #+#    #+#             */
/*   Updated: 2022/07/06 15:08:48 by zghouzla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	put_collec(t_mlx *obj, int i, int j)
{
	int static	k;

	if (k > 140)
		k = 0;
	if (k <= 70)
		mlx_put_image_to_window(obj->mlx, obj->win,
			obj->collectible, j * 32, i * 32);
	else if (k <= 140)
		mlx_put_image_to_window(obj->mlx, obj->win,
			obj->collectible1, j * 32, i * 32);
	k++;
}

int	ft_collec(t_mlx *obj)
{
	int	i;
	int	j;

	i = 0;
	if (obj->map.collectibles)
	{
		while (i < obj->map.row)
		{
			j = 0;
			while (j < obj->map.col)
			{
				if (obj->map.data[i][j] == 'C')
					put_collec(obj, i, j);
				j++;
			}
			i++;
		}
	}
	return (0);
}
