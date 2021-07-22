/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_a_char.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 11:39:42 by wollio            #+#    #+#             */
/*   Updated: 2021/07/19 19:20:11 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_is_a_char(va_list arg, char	**string)
{
	char	c;

	c = va_arg(arg, int);
	ft_putchar_fd(c, 1);
	(*string)++;
	return (1);
}
