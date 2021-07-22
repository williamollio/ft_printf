#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "./libft/libft.h"
# include <stdarg.h>

int		ft_printf(const char	*format, ...);
int		ft_specifier(char	**string, va_list arg);
int		ft_is_a_char(va_list arg, char **string);
int		ft_is_a_string(va_list arg, char **str);
int		ft_is_an_adress(va_list arg, char **string);
int		ft_is_an_integer(va_list arg, char **string);
int		ft_is_an_unsigned(va_list arg, char **string);
int		ft_is_an_hex_lower(va_list arg, char **string);
int		ft_is_an_hex_upper(va_list arg, char **string);
int		ft_is_an_percentage(char **string);
void	print_hex_lower(unsigned int b);
int		get_length_hex(unsigned int b);

#endif
