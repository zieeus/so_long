/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zghouzla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 00:11:16 by zghouzla          #+#    #+#             */
/*   Updated: 2021/11/25 00:12:15 by zghouzla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

/*
int main()
{
	int fd;
	fd = 3;
	printf("%d",fd);
	ft_putendl_fd("cccc", fd);
	ft_putendl_fd("miski", 1);
}

*/
