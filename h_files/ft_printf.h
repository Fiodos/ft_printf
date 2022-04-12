/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyuzhyk <fyuzhyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 11:36:09 by fyuzhyk           #+#    #+#             */
/*   Updated: 2022/04/12 16:43:25 by fyuzhyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft.h"

int		ft_printf(const char *, ...);

int		ft_printf_c(va_list args);

int		ft_printf_s(va_list args);

int		ft_printf_d(va_list args);

int		ft_printf_i(va_list args);

int		ft_printf_p(va_list args);

int		ft_printf_u(va_list args);

int		ft_printf_percent(va_list args);

int		to_hex(long long int num, char *hex, int x);

char	*ft_strcpy(char *dst, char *src);

int		ft_printf_hexa(va_list args, int x);

int		find_spec(char c, va_list args);

int		print_spec(const char *format, va_list args, int i, char *spec);

char	*init_spec(char *str);
#endif
