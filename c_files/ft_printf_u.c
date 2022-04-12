/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyuzhyk <fyuzhyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 13:04:36 by fyuzhyk           #+#    #+#             */
/*   Updated: 2022/04/12 17:44:53 by fyuzhyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../h_files/ft_printf.h"
#include "../h_files/libft.h"

#include <stdio.h>
int	ft_printf_u(va_list args)
{
	unsigned int	u;
	char			*num;
	int				len;

	u = va_arg(args, unsigned int);
	if (u < 0)
		ft_putnbr_fd(u, 1);
		return (0);
	num = ft_itoa(u);
	len = ft_strlen(num);

	ft_putstr_fd(num, 1);
	free(num);
	num = NULL;
	return (len);
}
