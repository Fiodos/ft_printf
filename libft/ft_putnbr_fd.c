/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyuzhyk <fyuzhyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 14:57:39 by fyuzhyk           #+#    #+#             */
/*   Updated: 2022/04/14 12:11:05 by fyuzhyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	nb;

	if (n < 0)
	{
		if (n == -2147483648)
		{
			ft_putstr_fd("-2147483648", fd);
			return ;
		}
		ft_putchar_fd('-', fd);
		n = n * (-1);
	}
	if (n == 0)
		ft_putchar_fd('0', fd);
	if (n > 0)
	{
		nb = (n % 10) + '0';
		n = n / 10;
		if (n > 0)
			ft_putnbr_fd(n, fd);
		ft_putchar_fd(nb, fd);
	}
	return ;
}

// #include <stdio.h>
// int main()
// {
// 	int test = -2147483648;
// 	ft_putnbr_fd(test, 1);
// 	return (0);
// }
