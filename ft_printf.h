/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segarcia <segarcia@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 11:16:28 by segarcia          #+#    #+#             */
/*   Updated: 2022/06/09 13:23:37 by segarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
int		print_char(int c);
int		print_str(const char *str);
char	*ft_itoa(int n);
char	*ft_uitoa(int n);
int		ft_printf_int(int n);
int		ft_printf_uint(unsigned int n);
int		ft_printf_hex(unsigned int n, char format);
int		ft_printf_ptr(unsigned long long ptr);

#endif
