/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_i.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyuzhyk <fyuzhyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 13:02:26 by fyuzhyk           #+#    #+#             */
/*   Updated: 2022/04/12 16:33:32 by fyuzhyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../h_files/ft_printf.h"
#include "../h_files/libft.h"

int	ft_printf_i(va_list args)
{
	int		i;
	int		len;
	char	*num;

	i = va_arg(args, int);
	num = ft_itoa(i);
	len = ft_strlen(num);

	ft_putstr_fd(num, 1);
	free(num);
	num = NULL;
	return (len);
}
