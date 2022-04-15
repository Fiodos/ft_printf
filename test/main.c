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

#include "../lib/ft_printf.h"
#include <stdio.h>
#include <string.h>

int main()
{
	int	p;
	int f;

	char	c = 'Z';
	p = printf("%c", c);
	f = ft_printf("%c", c);
	if (p == f && )
}
