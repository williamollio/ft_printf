/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_an_integer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 13:11:49 by wollio            #+#    #+#             */
/*   Updated: 2021/07/18 14:37:53 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_is_an_integer(va_list arg, char **string)
{
	char	*str;
	int		len;

	str = ft_itoa(va_arg(arg, int));
	len = ft_strlen(str);
	ft_putstr_fd(str, 1);
	free(str);
	(*string)++;
	return (len);
}
