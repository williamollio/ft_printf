/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_specifier.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 15:28:26 by wollio            #+#    #+#             */
/*   Updated: 2021/07/18 14:37:45 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_specifier(char	**string, va_list	arg)
{
	if (**string == 'c')
		return (ft_is_a_char(arg, string));
	if (**string == 's')
		return (ft_is_a_string(arg, string));
	if (**string == 'p')
		return (ft_is_an_adress(arg, string));
	if (**string == 'd' || **string == 'i')
		return (ft_is_an_integer(arg, string));
	if (**string == 'u')
		return (ft_is_an_unsigned(arg, string));
	if (**string == 'x')
		return (ft_is_an_hex_lower(arg, string));
	if (**string == 'X')
		return (ft_is_an_hex_upper(arg, string));
	if (**string == '%')
		return (ft_is_an_percentage(string));
	else
		return (-1);
}
