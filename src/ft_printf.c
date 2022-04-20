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

	va_start(args, format);
	i = 0;
	result = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[++i] == '%')
				ft_putchar('%', &result);
			else
			{
				result += find_spec(format[i], args);
				va_arg(args, void *);
			}
		}
		else
			ft_putchar(format[i], &result);
		i++;
	}
	va_end(args);
	return (result);
}
