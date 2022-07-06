/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zghouzla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 23:13:19 by zghouzla          #+#    #+#             */
/*   Updated: 2021/11/27 00:05:07 by zghouzla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(char *)(s + i) = '\0';
		i++;
	}
}
/*
#include <stdio.h>
int main()
{
	int		tab[3] = {1, 2, 3};
	ft_bzero(tab, 3 * sizeof(int));
	printf("%d", tab[0]);
	printf("%d", tab[1]);
	printf("%d", tab[2]);
}*/
