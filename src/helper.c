/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyuzhyk <fyuzhyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 09:55:53 by fyuzhyk           #+#    #+#             */
/*   Updated: 2022/06/28 12:18:21 by fyuzhyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/ft_printf.h"

int	find_spec(char c, va_list *args)
{
	if (c == 'c')
		return (ft_printf_c(args));
	if (c == 's')
		return (ft_printf_s(args));
	if (c == 'd' || c == 'i')
		return (ft_printf_i(args));
	if (c == 'u')
		return (ft_printf_u(args));
	if (c == 'p')
		return (ft_printf_p(args));
	if (c == 'x' || c == 'X')
		return (ft_printf_hexa(args, c));
	return (0);
}

char	*ft_strcpy(char *dst, char *src)
{
	int	i;
	int	len;

	len = ft_strlen(src);
	i = 0;
	while (i < len)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char	*rev_str(char *str)
{
	char	temp;
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(str) - 1;
	while (i < len)
	{
		temp = str[i];
		str[i] = str[len];
		str[len] = temp;
		i++;
		len--;
	}
	return (str);
}

void	ft_putchar(char c, int *result)
{
	write(1, &c, 1);
	(*result)++;
}
