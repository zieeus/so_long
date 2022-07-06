/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zghouzla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 00:25:27 by zghouzla          #+#    #+#             */
/*   Updated: 2021/11/25 00:25:28 by zghouzla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	match_check(char c, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*p;
	size_t	i;
	size_t	start;
	size_t	end;

	start = 0;
	if (!s1)
		return (NULL);
	while (s1[start] && match_check(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && match_check(s1[end - 1], set))
		end--;
	p = (char *)malloc(sizeof(*s1) * (end - start + 1));
	if (!p)
		return (NULL);
	i = 0;
	while (start < end)
	{
		p[i] = s1[start];
		i++;
		start++;
	}
	p[i] = '\0';
	return (p);
}
