/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specifiers.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyuzhyk <fyuzhyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 11:27:28 by fyuzhyk           #+#    #+#             */
/*   Updated: 2022/06/25 11:28:32 by fyuzhyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/ft_printf.h"

int	ft_printf_c(va_list *args)
{
	char	c;

	c = (char) va_arg(*args, int);
	ft_putchar_fd(c, 1);
	return (1);
}

int	ft_printf_i(va_list *args)
{
	int		i;
	int		len;
	char	*num;

	i = va_arg(*args, int);
	num = ft_itoa(i);
	len = ft_strlen(num);
	ft_putstr_fd(num, 1);
	free(num);
	num = NULL;
	return (len);
}

int	ft_printf_s(va_list *args)
{
	char	*s;
	int		len;

	s = va_arg(*args, char *);
	if (s == NULL)
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}
	len = ft_strlen(s);
	ft_putstr_fd(s, 1);
	return (len);
}

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
