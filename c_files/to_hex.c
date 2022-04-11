/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyuzhyk <fyuzhyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 13:13:12 by fyuzhyk           #+#    #+#             */
/*   Updated: 2022/04/11 15:04:16 by fyuzhyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*init_base(char *dst, char *src)
{
	int	i;

	dst = malloc(sizeof(char) * 17);
	i = 0;
	while (i < 16)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

size_t	ft_strlen(const char *s)
{
	int	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
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

char	*to_hex(int	num)
{
	char	*base;
	char	*hex;
	int		result;
	int		i;

	base = init_base(base, "0123456789ABCDEF");
	result = 1;
	i = 0;
	hex = malloc(16 * sizeof(char));
	while (num > 0)
	{
		result = num % 16;
		hex[i] = base[result];
		i++;
		num = num / 16;
	}
	hex = rev_str(hex);
	return (hex);
}

int main()
{
	int		n = 65;
	char	*result = to_hex(n);
	printf("%s\n", result);
	return (0);
}
