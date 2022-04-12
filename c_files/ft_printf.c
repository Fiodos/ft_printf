/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyuzhyk <fyuzhyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 10:48:32 by fyuzhyk           #+#    #+#             */
/*   Updated: 2022/04/12 17:01:09 by fyuzhyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../h_files/ft_printf.h"
#include "../h_files/libft.h"

int	ft_printf(const char *format, ...)
{
	int		i;
	int		result;
	va_list args;

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
