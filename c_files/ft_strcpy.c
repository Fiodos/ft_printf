/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyuzhyk <fyuzhyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 10:12:50 by fyuzhyk           #+#    #+#             */
/*   Updated: 2022/04/12 13:55:33 by fyuzhyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../h_files/ft_printf.h"
#include "../h_files/libft.h"

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
