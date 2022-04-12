/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyuzhyk <fyuzhyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 12:56:10 by fyuzhyk           #+#    #+#             */
/*   Updated: 2022/04/12 16:33:43 by fyuzhyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../h_files/ft_printf.h"
#include "../h_files/libft.h"

int	ft_printf_p(va_list args)
{
	long long int	ptr;
	char			*hex;
	int				result;

	hex = malloc(sizeof(char) * 19);
	ptr = va_arg(args, long long int);
	result = to_hex(ptr, hex, 'x');
	ft_putstr_fd("0x", 1);
	ft_putstr_fd(hex, 1);
	free(hex);
	hex = NULL;
	return (result + 2);
}
