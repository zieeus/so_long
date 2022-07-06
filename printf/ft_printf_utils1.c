/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils1.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zghouzla <zghouzla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 15:57:49 by zghouzla          #+#    #+#             */
/*   Updated: 2022/07/06 15:57:51 by zghouzla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_len_uns(unsigned long num, int base)
{
	int	len;

	len = 0;
	if (num == 0)
		len++;
	while (num != 0)
	{
		len++;
		num = num / base;
	}
	return (len);
}

int	ft_len_nbr(int num)
{
	int		len;
	long	nbr;

	len = 0;
	nbr = num;
	if (nbr <= 0)
	{
		nbr = -nbr;
		len++;
	}
	while (num != 0)
	{
		len++;
		num = num / 10;
	}
	return (len);
}

int	ft_put_hex(unsigned long num, char indicateur)
{
	char	*hex;

	if (indicateur == 'x')
		hex = "0123456789abcdef";
	else
		hex = "0123456789ABCDEF";
	if (num >= 16)
		ft_put_hex(num / 16, indicateur);
	ft_putchar(hex[num % 16]);
	return (ft_len_uns(num, 16));
}

int	ft_putnbr(int num)
{
	long	nbr;

	nbr = num;
	if (nbr < 0)
	{
		nbr = -nbr;
		ft_putchar('-');
	}
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
	}
	ft_putchar(nbr % 10 + 48);
	return (ft_len_nbr(num));
}

int	ft_putunsigned(unsigned int num)
{
	if (num > 9)
	{
		ft_putunsigned(num / 10);
	}
	ft_putchar(num % 10 + 48);
	return (ft_len_uns(num, 10));
}
