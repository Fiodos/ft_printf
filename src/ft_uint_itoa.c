/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uint_itoa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyuzhyk <fyuzhyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 10:03:32 by fyuzhyk           #+#    #+#             */
/*   Updated: 2022/04/14 12:05:47 by fyuzhyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/libft.h"

static int	digit_count(unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		i++;
	if (n < 0)
		n *= (-1);
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

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

static char	*negative_int(unsigned int n, char *num)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	digit;

	i = 0;
	j = n * (-1);
	while (j > 0)
	{
		digit = j % 10;
		num[i++] = digit + '0';
		j = j / 10;
	}
	num[i++] = '-';
	num[i] = '\0';
	rev_str(num);
	return (num);
}

char	*ft_uint_itoa(unsigned int n)
{
	char			*num;
	unsigned int	digit;
	unsigned int	i;

	num = malloc(sizeof(char) * digit_count(n) + 2);
	if (num == 0)
		return (0);
	i = 0;
	if (n == 0)
		num[i++] = '0';
	if (n < 0)
		return (negative_int(n, num));
	while (n > 0)
	{
		digit = n % 10;
		num[i++] = digit + '0';
		n = n / 10;
	}
	num[i] = '\0';
	rev_str(num);
	return (num);
}
