/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zghouzla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 23:15:01 by zghouzla          #+#    #+#             */
/*   Updated: 2021/11/24 23:15:03 by zghouzla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int a)
{
	if (a <= '9' && a >= '0')
		return (1);
	return (0);
}
