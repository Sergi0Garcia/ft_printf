/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segarcia <segarcia@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 11:14:54 by segarcia          #+#    #+#             */
/*   Updated: 2022/06/08 11:29:12 by segarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_handler(va_list args, const char format)
{
	if (format == '%')
		print_char('%');
	if (format == 'c')
		print_char(va_arg(args, int));
	if (format == 's')
		print_str(va_arg(args, char *));
	if (format == 'i' || format == 'd')
		ft_printf_int(va_arg(args, int));
	if (format == 'u')
		ft_printf_uint(va_arg(args, unsigned int));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	int	i;
	int	str_length;
	va_list	arg;

	i = 0;
	str_length = 0;
	va_start(arg, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			ft_handler(arg , str[i + 1]);
			i++;
		}
		else
			print_char(str[i]);
		i++;
	}
	va_end(arg);
	return (str_length);
}