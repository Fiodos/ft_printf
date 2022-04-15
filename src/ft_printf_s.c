/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyuzhyk <fyuzhyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 12:51:41 by fyuzhyk           #+#    #+#             */
/*   Updated: 2022/04/14 14:35:51 by fyuzhyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/ft_printf.h"

int	ft_printf_s(va_list args)
{
	char	*s;
	int		len;

	s = va_arg(args, char *);
	if (s == NULL)
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}
	len = ft_strlen(s);
	ft_putstr_fd(s, 1);
	return (len);
}