/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_uint.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segarcia <segarcia@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 11:06:23 by segarcia          #+#    #+#             */
/*   Updated: 2022/06/08 11:15:08 by segarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_uint(unsigned int n)
{
	char *num;
	int	len;

	len = 0;
	num = ft_uitoa(n);
	len = print_str(num);
	free(num);
	return (len);
}