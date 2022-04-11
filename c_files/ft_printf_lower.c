/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_lower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyuzhyk <fyuzhyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 16:12:46 by fyuzhyk           #+#    #+#             */
/*   Updated: 2022/04/11 16:23:50 by fyuzhyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static char	*rev_str(char *str)
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

void	to_hex(long long int num, char *hex, char case)
{
	char	*base;
	long long int		result;
	long long int		i;

	if (case == 'x')
		base = init_base(base, "0123456789abcdef");
	else
		base = init_base(base, "0123456789ABCDEF");
	result = 1;
	i = 0;
	while (num > 0)
	{
		result = num % 16;
		hex[i] = base[result];
		i++;
		num = num / 16;
	}
	hex[i++] = 'x';
	hex[i++] = '0';
	hex[i] = '\0';
	hex = rev_str(hex);
}

void	ft_printf_hexa(va_list args, char case)
{
	long long int		ptr;
	char				*hex;

	hex = malloc(sizeof(char) * 19);
	ptr = va_arg(args, long long int);
	to_hex(ptr, hex, 'x');
	ft_putstr_fd(hex, 1);
}
