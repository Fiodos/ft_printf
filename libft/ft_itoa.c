/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyuzhyk <fyuzhyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 14:58:55 by fyuzhyk           #+#    #+#             */
/*   Updated: 2022/04/12 13:57:29 by fyuzhyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../h_files/libft.h"

static int	digit_count(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		i++;
	if (n < 0)
		n *= (-1);
	if (n == -2147483648)
		return (10);
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

static char	*negative_int(int n, char *num)
{
	int				i;
	unsigned int	j;
	int				digit;

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

char	*ft_itoa(int n)
{
	char	*num;
	int		digit;
	int		i;

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

// #include <stdio.h>
// int main()
// {
// 	int		n = -2147483648;
// 	printf("%s\n", ft_itoa(n));
// 	return (0);
// }
