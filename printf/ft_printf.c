/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zghouzla <zghouzla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 15:57:55 by zghouzla          #+#    #+#             */
/*   Updated: 2022/07/06 15:57:57 by zghouzla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_forme(va_list args, char c)
{
	int	len;

	if (c == 'c')
		len = ft_putchar(va_arg(args, int));
	else if (c == '%')
		len = ft_putchar('%');
	else if (c == 'x' || c == 'X')
		len = ft_put_hex(va_arg(args, unsigned int), c);
	else if (c == 'i' || c == 'd')
		len = ft_putnbr(va_arg(args, int));
	else if (c == 'u')
		len = ft_putunsigned(va_arg(args, unsigned int));
	else if (c == 'p')
	{
		len = write(1, "0x", 2);
		len += ft_put_hex(va_arg(args, unsigned long), 'x');
	}
	else if (c == 's')
		len = ft_putstr(va_arg(args, char *));
	else
		len = ft_putchar(c);
	return (len);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		len;
	va_list	args;

	i = 0;
	len = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			len += ft_forme(args, str[i + 1]);
			i++;
		}
		else
		{
			len += ft_putchar(str[i]);
		}
		i++;
	}
	va_end(args);
	return (len);
}
// int main()
// {

// 	printf("%d",ft_printf("%d", 0));

// }
