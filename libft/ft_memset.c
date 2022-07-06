/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zghouzla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 00:10:32 by zghouzla          #+#    #+#             */
/*   Updated: 2021/11/25 00:10:33 by zghouzla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n)
	{
		*p++ = (unsigned char)c;
		n--;
	}
	return (s);
}

/*
int main () {
    int i = 0;
    char str[50] = "Hada string";

    ft_memset(str,'$',7);
    while (str[i])
    {
        printf("%c",str[i]);
        i++;
    }
    return(0);
}
*/
