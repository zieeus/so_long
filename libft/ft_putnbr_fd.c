/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zghouzla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 00:12:29 by zghouzla          #+#    #+#             */
/*   Updated: 2021/11/25 00:13:21 by zghouzla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	if (nb < -9 || nb > 9)
		ft_putnbr_fd(nb / 10, fd);
	if (nb < 0)
	{
		if (nb >= -9)
			ft_putchar_fd('-', fd);
		ft_putchar_fd('0' - (nb % 10), fd);
	}
	else
		ft_putchar_fd('0' + (nb % 10), fd);
}
