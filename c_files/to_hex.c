/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyuzhyk <fyuzhyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 13:13:12 by fyuzhyk           #+#    #+#             */
/*   Updated: 2022/04/12 16:36:28 by fyuzhyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../h_files/ft_printf.h"
#include "../h_files/libft.h"

static char	*rev_str(char *str)
{
	char	temp;
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(str) - 1;
	while (i < len)
	{
		temp = str[i];
		str[i] = str[len];
		str[len] = temp;
		i++;
		len--;
	}
	return (str);
}

int	to_hex(long long int num, char *hex, int x)
{
	char				*base;
	long long int		result;
	long long int		i;

	base = malloc(sizeof(char) * 10);
	if (x == 'x')
		base = ft_strcpy(base, "0123456789abcdef");
	else
		base = ft_strcpy(base, "0123456789ABCDEF");
	result = 1;
	i = 0;
	while (num > 0)
	{
		result = num % 16;
		hex[i] = base[result];
		i++;
		num = num / 16;
	}
	free(base);
	base = NULL;
	hex = rev_str(hex);
	return (i);
}
