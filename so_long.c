/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zghouzla <zghouzla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 22:48:22 by zghouzla          #+#    #+#             */
/*   Updated: 2022/07/06 14:59:09 by zghouzla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int argc, char **argv)
{
	t_mlx	obj;

	obj = obj_initialize();
	if (argc != 2)
		ft_exit(0, &obj);
	to_map(argv[1], &obj);
	check_map(&obj);
	generate_game(&obj);
	get_assets(&obj);
	render_game(&obj);
	mlx_hook(obj.win, 2, 0L, move, &obj);
	mlx_hook(obj.win, 17, 0L, destroy_notify, &obj);
	mlx_loop(obj.mlx);
}
