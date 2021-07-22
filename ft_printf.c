/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 20:48:29 by wollio            #+#    #+#             */
/*   Updated: 2021/07/19 19:19:18 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_char(char	*string, int count, va_list arg)
{
	int	rt;

	rt = 0;
	while (*string)
	{
		while (*string && *string != '%')
		{
			ft_putchar_fd(*string, 1);
			string++;
			count++;
		}
		if (!*string)
			break ;
		string++;
		rt = ft_specifier(&string, arg);
		if (rt == -1)
			return (0);
		count += rt;
	}
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	arg;
	int		count;
	char	*string;
	char	*string_2;

	count = 0;
	va_start(arg, format);
	string = ft_strdup(format);
	if (!string)
		return (0);
	string_2 = string;
	count = print_char(string, count, arg);
	free(string_2);
	va_end(arg);
	return (count);
}
