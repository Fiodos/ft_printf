/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_spec.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyuzhyk <fyuzhyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 09:55:53 by fyuzhyk           #+#    #+#             */
/*   Updated: 2022/04/14 14:35:30 by fyuzhyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/ft_printf.h"

int	find_spec(char c, va_list args)
{
	if (c == 'c')
		return (ft_printf_c(args));
	if (c == 's')
		return (ft_printf_s(args));
	if (c == 'p')
		return (ft_printf_p(args));
	if (c == 'd')
		return (ft_printf_d(args));
	if (c == 'i')
		return (ft_printf_i(args));
	if (c == 'u')
		return (ft_printf_u(args));
	if (c == 'x')
		return (ft_printf_hexa(args, 'x'));
	if (c == 'X')
		return (ft_printf_hexa(args, 'X'));
	if (c == '%')
	{
		ft_putchar_fd('%', 1);
		return (1);
	}
	return (0);
}