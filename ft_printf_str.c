/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segarcia <segarcia@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 10:00:58 by segarcia          #+#    #+#             */
/*   Updated: 2022/06/08 10:47:19 by segarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_str(const char *str)
{
	int	i;

	i  = 0;
	while (str[i])
	{
		print_char(str[i]);
		i++;
	}
	return (i);
}