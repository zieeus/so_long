/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zghouzla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 00:15:58 by zghouzla          #+#    #+#             */
/*   Updated: 2021/11/25 00:16:00 by zghouzla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*
void    f(unsigned int a, char *b)
{
    (*b)++;
    (void)a;
}
#include <stdio.h>
int main()
{
    int i = 0;
    // char *out_str;
    // out_str = ;
    char s[20] = "abcd";
    ft_striteri(s,f);
    printf("%s",s);
}
*/
