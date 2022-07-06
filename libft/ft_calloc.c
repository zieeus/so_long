/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zghouzla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 23:13:38 by zghouzla          #+#    #+#             */
/*   Updated: 2021/11/27 00:04:50 by zghouzla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	p = (void *)malloc(count * size);
	if (!p)
		return (NULL);
	ft_memset(p, 0, count * size);
	return (p);
}
/*
#include <stdio.h>

int	main(void)
{
	int i;
	i = 0;
	int	*str = ft_calloc(5, sizeof(int));
	printf("%d", str[i]);
printf("%d", str[i+1]);
printf("%d", str[i+2]);
printf("%d", str[i+3]);
printf("%d", str[i+4]);
}*/
