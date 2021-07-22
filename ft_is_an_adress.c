/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_an_adress.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 13:09:57 by wollio            #+#    #+#             */
/*   Updated: 2021/07/19 19:21:10 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	print_pointer(unsigned long b)
{
	unsigned int	modulo;

	if (b > 15)
		print_pointer(b / 16);
	modulo = b % 16;
	if (modulo > 9)
		ft_putchar_fd(modulo + 55 + 32, 1);
	else
		ft_putchar_fd(modulo + 48, 1);
}

static int	get_length_adress(unsigned long b)
{
	int	count;

	count = 0;
	if (b == 0)
		count++;
	while (b != 0)
	{
		b /= 16;
		count++;
	}
	return (count);
}

int	ft_is_an_adress(va_list arg, char **string)
{
	int				count;
	unsigned long	b;

	ft_putstr_fd("0x", 1);
	b = (unsigned long)va_arg(arg, void *);
	count = get_length_adress(b);
	print_pointer(b);
	(*string)++;
	return (count + 2);
}
