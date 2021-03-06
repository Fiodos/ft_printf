/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyuzhyk <fyuzhyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 14:59:29 by fyuzhyk           #+#    #+#             */
/*   Updated: 2022/04/14 12:11:02 by fyuzhyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s == 0)
		return ;
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

// int main()
// {
// 	char *s = "Huhu";
// 	ft_putendl_fd(s, 2);
// 	return (0);
// }
