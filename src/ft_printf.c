/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyuzhyk <fyuzhyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 10:48:32 by fyuzhyk           #+#    #+#             */
/*   Updated: 2022/04/14 14:34:14 by fyuzhyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int		i;
	int		result;
	va_list	args;

	i = 0;
	result = 0;
	va_start(args, format);
	while ((unsigned long)i < ft_strlen(format))
	{
		if (format[i] == '%')
		{
			i++;
			result += find_spec(format[i], args);
		}
		else
		{
			ft_putchar_fd(format[i], 1);
			result++;
		}
		i++;
	}
	va_end(args);
	return (result);
}
