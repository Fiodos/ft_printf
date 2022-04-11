/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyuzhyk <fyuzhyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 10:48:32 by fyuzhyk           #+#    #+#             */
/*   Updated: 2022/04/11 18:00:12 by fyuzhyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "libft/libft.h"

void	ft_printf_c(va_list args)
{
	char	c;

	c = (char) va_arg(args, int);
	ft_putchar_fd(c, 1);
}

void	ft_printf_s(va_list args)
{
	char	*s;

	s = va_arg(args, char *);
	ft_putstr_fd(s, 1);
}

void	ft_printf_d(va_list args)
{
	int	d;

	d = va_arg(args, int);
	ft_putnbr_fd(d, 1);
}

void	ft_printf_i(va_list args)
{
	int	i;

	i = va_arg(args, int);
	ft_putnbr_fd(i, 1);
}

void	ft_printf_u(va_list args)
{
	unsigned int	u;

	u = va_arg(args, unsigned int);
	ft_putnbr_fd(u, 1);
}

void	ft_printf_percent(va_list args)
{
	char	percent;

	percent = (char) va_arg(args, int);
	ft_putchar_fd(percent, 1);
}

char	*ft_strcpy(char *dst, char *src)
{
	int	i;
	int	len;

	len = ft_strlen(src);
	dst = malloc(sizeof(char) * len);
	i = 0;
	while (i < len)
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

void	to_hex(long long int num, char *hex, int x)
{
	char				*base;
	long long int		result;
	long long int		i;

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
	hex = rev_str(hex);
}

void	ft_printf_p(va_list args)
{
	long long int		ptr;
	char				*hex;

	hex = malloc(sizeof(char) * 19);
	ptr = va_arg(args, long long int);
	to_hex(ptr, hex, 'x');
	ft_putstr_fd("0x", 1);
	ft_putstr_fd(hex, 1);
}

void	ft_printf_hexa(va_list args, int x)
{
	long long int		num;
	char				*hex;

	hex = malloc(sizeof(char) * 19);
	num = va_arg(args, long long int);
	if (x == 'x')
		to_hex(num, hex, 'x');
	else
		to_hex(num, hex, 'X');
	ft_putstr_fd(hex, 1);
}

void	print_spec(char c, va_list args)
{
	if (c == 'c')
		ft_printf_c(args);
	if (c == 's')
		ft_printf_s(args);
	if (c == 'p')
		ft_printf_p(args);
	if (c == 'd')
		ft_printf_d(args);
	if (c == 'i')
		ft_printf_i(args);
	if (c == 'u')
		ft_printf_u(args);
	if (c == 'x')
		ft_printf_hexa(args, 'x');
	if (c == 'X')
		ft_printf_hexa(args, 'X');
	if (c == '%')
		ft_putchar_fd('%', 1);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		j;
	char	*spec;
	va_list args;

	i = 0;
	spec = malloc(sizeof(char) * 10);
	spec = ft_strcpy(spec, "cspdiuxX%%");
	va_start(args, format);
	while (i < ft_strlen(format))
	{
		if (format[i] == '%')
		{
			i++;
			j = 0;
			while (j < ft_strlen(spec))
			{
				if (format[i] == spec[j])
				{
					print_spec(spec[j], args);
					break ;
				}
				j++;
			}
		}
		else
			ft_putchar_fd(format[i], 1);
		i++;
	}
	va_end(args);
	return (i); // need to count and return the number of chars printed; also need to take a look at mem leaks;
}

int main()
{
	char	c = 'A';
	char	*s = "Huhu";
	int		*ptr;
	int		d = 55566;
	ptr = &d;
	ft_printf("lowercase hexa: %x\n", d);
	ft_printf("uppercase hexa: %X\n", d);
	ft_printf("decimal number: %d\n", d);
	ft_printf("string: %s\n", s);
	ft_printf("character: %c\n", c);
	ft_printf("pointer address: %p\n", ptr);
	return (0);
}
