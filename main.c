/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyuzhyk <fyuzhyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 10:49:11 by fyuzhyk           #+#    #+#             */
/*   Updated: 2022/04/12 18:23:45 by fyuzhyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "h_files/ft_printf.h"
int main()
{
	// char	c = 'A';
	// char	*s = NULL;
	unsigned int		*ptr;
	unsigned int		d = -11;
	ptr = &d;
	// char *hex = malloc(sizeof(char) * 19);
	// ft_printf("lowercase hexa: %x\n", d);
	// ft_printf("uppercase hexa: %X\n", d);
	// ft_printf("decimal number: %d\n", d);
	// ft_printf("string: %s\n", s);
	// ft_printf("character: %c\n", c);
	// ft_printf("pointer address: %p\n", ptr);
	// int	result = ft_printf("Hey %s\n", s);
	// long long int test = 1407328332168;
	int result2 = printf("%p\n", ptr);
	ft_printf("%p\n", ptr);
	printf("%d\n", result2);
	return (0);
}
