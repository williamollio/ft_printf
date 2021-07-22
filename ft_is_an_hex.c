/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_an_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 13:12:30 by wollio            #+#    #+#             */
/*   Updated: 2021/07/19 19:22:04 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	get_length_hex(unsigned int b)
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

void	print_hex_lower(unsigned int b)
{
	unsigned int	modulo;

	if (b > 15)
		print_hex_lower(b / 16);
	modulo = b % 16;
	if (modulo > 9)
		ft_putchar_fd(modulo + 55 + 32, 1);
	else
		ft_putchar_fd(modulo + 48, 1);
}

void	print_hex_upper(unsigned int b)
{
	unsigned int	modulo;

	if (b > 15)
		print_hex_upper(b / 16);
	modulo = b % 16;
	if (modulo > 9)
		ft_putchar_fd(modulo + 55, 1);
	else
		ft_putchar_fd(modulo + 48, 1);
}

int	ft_is_an_hex_upper(va_list arg, char **string)
{
	int				count;
	unsigned int	b;

	b = va_arg(arg, unsigned int);
	count = get_length_hex(b);
	print_hex_upper(b);
	(*string)++;
	return (count);
}

int	ft_is_an_hex_lower(va_list arg, char **string)
{
	int				count;
	unsigned int	b;

	b = va_arg(arg, unsigned int);
	count = get_length_hex(b);
	print_hex_lower(b);
	(*string)++;
	return (count);
}
