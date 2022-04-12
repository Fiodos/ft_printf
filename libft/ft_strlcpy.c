/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyuzhyk <fyuzhyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 15:00:27 by fyuzhyk           #+#    #+#             */
/*   Updated: 2022/04/12 13:58:56 by fyuzhyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../h_files/libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	src_size;

	i = 0;
	src_size = ft_strlen(src);
	if (dstsize <= 0)
		return (src_size);
	while (i < (dstsize - 1) && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_size);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char dest[4];
// 	char src[] = "Hel";

// 	printf("ft_strlcpy: %lu\n", ft_strlcpy(dest, src, 4));
// 	printf("strlcpy: %lu\n", strlcpy(dest, src, 4));
// 	printf("%s\n", dest);
// 	return (0);
// }
