/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyuzhyk <fyuzhyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 13:13:12 by fyuzhyk           #+#    #+#             */
/*   Updated: 2022/06/28 12:17:50 by fyuzhyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/ft_printf.h"

char	get_hex(int	result, char base)
{
	if (base == 'x')
		return ("0123456789abcdef"[result]);
	else
		return ("0123456789ABCDEF"[result]);
}

int	to_hex(unsigned int num, char *hex, int x)
{
	int		result;
	int		i;

	result = 1;
	i = 0;
	if (num == 0)
		hex[i++] = '0';
	while (num > 0)
	{
		result = num % 16;
		hex[i] = get_hex(result, x);
		i++;
		num = num / 16;
	}
	hex[i] = '\0';
	hex = rev_str(hex);
	return (i);
}

int	to_hexp(unsigned long num, char *hex, int x)
{
	int		result;
	int		i;

	result = 1;
	i = 0;
	if (num == 0)
		hex[i++] = '0';
	while (num > 0)
	{
		result = num % 16;
		hex[i] = get_hex(result, x);
		i++;
		num = num / 16;
	}
	hex[i] = '\0';
	hex = rev_str(hex);
	return (i);
}

int	ft_printf_hexa(va_list *args, int x)
{
	unsigned long	num;
	char			*hex;
	int				result;

	hex = malloc(sizeof(char) * 19);
	num = va_arg(*args, unsigned long);
	if (x == 'x')
		result = to_hex(num, hex, 'x');
	else
		result = to_hex(num, hex, 'X');
	ft_putstr_fd(hex, 1);
	free(hex);
	hex = 0;
	return (result);
}

int	ft_printf_p(va_list *args)
{
	unsigned long	ptr;
	char			*hex;
	int				result;

	hex = malloc(sizeof(char) * 19);
	ptr = va_arg(*args, unsigned long);
	result = to_hexp(ptr, hex, 'x');
	ft_putstr_fd("0x", 1);
	ft_putstr_fd(hex, 1);
	free(hex);
	hex = NULL;
	return (result + 2);
}
