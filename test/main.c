/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyuzhyk <fyuzhyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 15:34:39 by fyuzhyk           #+#    #+#             */
/*   Updated: 2022/04/14 15:40:35 by fyuzhyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "../lib/ft_printf.h"

int main()
{
	char	*s = NULL;
	int		id = fork();
	if (id == 0)
	{
		int a1_fd = open("a1", O_RDWR);
		dup2(STDOUT_FILENO, 5);
		dup2(a1_fd, STDOUT_FILENO);
		close(a1_fd);
		// STRING
		ft_printf("%s\n", "Easy test");
		ft_printf("%s %s\n", "Second test,", "more spice!");
		ft_printf("%s%s%s%s\n", "Armageddon", "is", s, "happening");
		// CHAR
		ft_printf("%c\n", 'A');
		ft_printf("I love %c\n", 'u');
		ft_printf("%copefully this %cill %cork out!\n", 'h', 'w', 'w');
		// UINT
		ft_printf("%u\n", 42);
		ft_printf("%u\n", UINT32_MAX);
		ft_printf("I am %u and still love to party\n", 42);
		// INT
		ft_printf("Happy %d\n", 420);
		ft_printf("%d%d%d\n", 6, 6, 6);
		ft_printf("%d\n", INT32_MAX);
		ft_printf("%d\n", INT32_MIN);
		// INT (i)
		ft_printf("Happy %d\n", 420);
		ft_printf("%d%d%d\n", 6, 6, 6);
		ft_printf("%d\n", INT32_MAX);
		ft_printf("%d\n", INT32_MIN);
		// X
		ft_printf("%X\n", 42);
		ft_printf("%X\n", UINT32_MAX);
		ft_printf("%X\n", INT32_MAX);
		ft_printf("%X\n", INT32_MIN);
		// x
		ft_printf("%x\n", 42);
		ft_printf("%x\n", UINT32_MAX);
		ft_printf("%x\n", INT32_MAX);
		ft_printf("%x\n", INT32_MIN);
	}
	else
	{
		int a2_fd = open("a2", O_RDWR);
		dup2(STDOUT_FILENO, 5);
		dup2(a2_fd, STDOUT_FILENO);
		close(a2_fd);
		printf("%s\n", "Easy test");
		printf("%s %s\n", "Second test,", "more spice!");
		printf("%s%s%s%s\n", "Armageddon", "is", s, "happening");
		// CHAR
		printf("%c\n", 'A');
		printf("I love %c\n", 'u');
		printf("%copefully this %cill %cork out!\n", 'h', 'w', 'w');
		// UINT
		printf("%u\n", 42);
		printf("%u\n", UINT32_MAX);
		printf("I am %u and still love to party\n", 42);
		// INT
		printf("Happy %d\n", 420);
		printf("%d%d%d\n", 6, 6, 6);
		printf("%d\n", INT32_MAX);
		printf("%d\n", INT32_MIN);
		// INT (i)
		printf("Happy %d\n", 420);
		printf("%d%d%d\n", 6, 6, 6);
		printf("%d\n", INT32_MAX);
		printf("%d\n", INT32_MIN);
		// X
		printf("%X\n", 42);
		printf("%X\n", UINT32_MAX);
		printf("%X\n", INT32_MAX);
		printf("%X\n", INT32_MIN);
		// x
		printf("%x\n", 42);
		printf("%x\n", UINT32_MAX);
		printf("%x\n", INT32_MAX);
		printf("%x\n", INT32_MIN);
	}
	return (0);
}
