/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_an_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 13:07:24 by wollio            #+#    #+#             */
/*   Updated: 2021/07/19 19:32:57 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	get_length(unsigned int nbr)
{
	int	i;

	i = 1;
	while (nbr >= 10)
	{
		nbr /= 10;
		i++;
	}
	return (i);
}

static char	*ft_revers(char	*str)
{
	unsigned int	temp;
	int				i;
	int				j;

	i = 0;
	j = ft_strlen(str) - 1;
	while (i < j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
	return (str);
}

static char	*ft_conversion(unsigned int nbr, char *str, int i)
{
	unsigned int	nbr1;

	nbr1 = nbr;
	while (nbr)
	{
		str[i] = nbr % 10 + '0';
		nbr /= 10;
		i++;
	}
	if (nbr1 == 0)
	{
		str[i] = '0';
		i++;
	}
	str[i] = '\0';
	return (str);
}

static void	*itoa_unsigned(unsigned int nbr)
{
	char				*str;
	char				*str1;
	int					i;

	i = 0;
	str = malloc(sizeof(unsigned int) * (get_length(nbr) + 1));
	if (!str)
		return (0);
	str1 = str;
	str = ft_conversion(nbr, str, i);
	ft_revers(str);
	ft_putstr_fd(str, 1);
	free(str1);
	return (0);
}

int	ft_is_an_unsigned(va_list arg, char **string)
{
	unsigned int	a;

	a = va_arg(arg, unsigned int);
	itoa_unsigned(a);
	(*string)++;
	return (get_length(a));
}
