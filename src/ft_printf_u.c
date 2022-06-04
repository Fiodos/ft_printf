/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyuzhyk <fyuzhyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 13:04:36 by fyuzhyk           #+#    #+#             */
/*   Updated: 2022/06/04 16:34:32 by fyuzhyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/ft_printf.h"

int	ft_printf_u(va_list *args)
{
	long int		i;
	unsigned int	u;
	char			*num;
	int				len;

	i = va_arg(*args, long int);
	if (i < 0)
		u = 4294967295 - i;
	u = i;
	num = ft_uint_itoa(u);
	len = ft_strlen(num);
	ft_putstr_fd(num, 1);
	free(num);
	num = NULL;
	return (len);
}
