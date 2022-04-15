/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyuzhyk <fyuzhyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 10:49:11 by fyuzhyk           #+#    #+#             */
/*   Updated: 2022/04/14 18:14:10 by fyuzhyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "lib/ft_printf.h"

void	ptest_c(void)
{
	char	*s = "Huhu";
	printf("%s", s);
}
void	ftest_c(void)
{
	char	*s = "Huhu";
	ft_printf("%s", s);
}

int main()
{
	int id = fork();
	if (id == 0)
	{
		FILE *a1 = fopen("a1", "w");
		int a1_fd = fileno(a1);
		dup2(a1_fd, STDOUT_FILENO); // fd: 1 is now a1;
		close(a1_fd);
		//ft_printf("This should print into file a1!");
		ftest_c();
	}
	else
	{
		FILE *a2 = fopen("a2", "w");
		int a2_fd = fileno(a2);
		dup2(a2_fd, STDOUT_FILENO);
		close(a2_fd);
		// ft_printf("This should print into file a2!");
		ptest_c();
	}
	return (0);
}
