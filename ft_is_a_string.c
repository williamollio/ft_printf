/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_a_string.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 13:09:16 by wollio            #+#    #+#             */
/*   Updated: 2021/07/20 15:36:22 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_is_a_string(va_list arg, char **string)
{
	int		len;
	char	*str;

	str = va_arg(arg, char *);
	if (!str)
	{
		write(1, "(null)", 6);
		(*string)++;
		return (6);
	}
	len = ft_strlen(str);
	ft_putstr_fd(str, 1);
	(*string)++;
	return (len);
}
