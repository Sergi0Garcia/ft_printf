/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segarcia <segarcia@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 10:32:54 by segarcia          #+#    #+#             */
/*   Updated: 2022/06/08 10:57:02 by segarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_int(int n)
{
	char *num;
	int	len;

	len = 0;
	num = ft_itoa(n);
	len = print_str(num);
	free(num);
	return (len);
}