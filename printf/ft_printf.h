/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zghouzla <zghouzla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 15:58:01 by zghouzla          #+#    #+#             */
/*   Updated: 2022/07/06 15:58:03 by zghouzla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include<stdarg.h>
# include<unistd.h>
# include<stdio.h>

int	ft_printf(const char *str, ...);
int	ft_put_hex(unsigned long num, char indicateur);
int	ft_putchar(char c);
int	ft_putnbr(int num);
int	ft_putunsigned(unsigned int num);
int	ft_putstr(char *s);
#endif
