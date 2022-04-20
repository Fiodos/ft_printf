/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyuzhyk <fyuzhyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 12:56:10 by fyuzhyk           #+#    #+#             */
/*   Updated: 2022/04/14 14:35:49 by fyuzhyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/ft_printf.h"

int	ft_printf_p(va_list args)
{
	unsigned long	ptr;
	char			*hex;
	int				result;

	hex = malloc(sizeof(char) * 19);
	ptr = va_arg(args, unsigned long);
	result = to_hexp(ptr, hex, 'x');
	ft_putstr_fd("0x", 1);
	ft_putstr_fd(hex, 1);
	free(hex);
	hex = NULL;
	return (result + 2);
}
