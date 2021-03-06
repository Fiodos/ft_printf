/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyuzhyk <fyuzhyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 14:59:25 by fyuzhyk           #+#    #+#             */
/*   Updated: 2022/04/14 12:10:59 by fyuzhyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/libft.h"

void	ft_putchar_fd(char c, int fd)
{
	const void	*ptr;

	ptr = &c;
	write (fd, ptr, 1);
}

// int main()
// {
// 	char c = 'G';
// 	int fd = 2;

// 	ft_putchar_fd(c, fd);
// 	return (0);
// }
