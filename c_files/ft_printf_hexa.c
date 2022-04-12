/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyuzhyk <fyuzhyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 16:12:46 by fyuzhyk           #+#    #+#             */
/*   Updated: 2022/04/12 16:32:40 by fyuzhyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../h_files/ft_printf.h"
#include "../h_files/libft.h"

int	ft_printf_hexa(va_list args, int x)
{
	long long int	num;
	char			*hex;
	int				result;

	hex = malloc(sizeof(char) * 19);
	num = va_arg(args, long long int);
	if (x == 'x')
		result = to_hex(num, hex, 'x');
	else
		result = to_hex(num, hex, 'X');
	ft_putstr_fd(hex, 1);
	free(hex);
	hex = 0;
	return (result);
}
