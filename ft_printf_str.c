/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segarcia <segarcia@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 10:00:58 by segarcia          #+#    #+#             */
/*   Updated: 2022/06/09 12:57:46 by segarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_str(const char *str)
{
	int	i;

	i = 0;
	if (!str)
	{
		print_char('(');
		print_char('n');
		print_char('u');
		print_char('l');
		print_char('l');
		print_char(')');
		return (6);
	}
	while (str[i])
	{
		print_char(str[i]);
		i++;
	}
	return (i);
}
