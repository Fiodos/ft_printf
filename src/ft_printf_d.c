/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyuzhyk <fyuzhyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 12:57:58 by fyuzhyk           #+#    #+#             */
/*   Updated: 2022/04/14 14:35:37 by fyuzhyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/ft_printf.h"

int	ft_printf_d(va_list args)
{
	int		d;
	int		len;
	char	*num;

	d = va_arg(args, int);
	num = ft_itoa(d);
	len = ft_strlen(num);
	ft_putstr_fd(num, 1);
	free(num);
	num = NULL;
	return (len);
}
