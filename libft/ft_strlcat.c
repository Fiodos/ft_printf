/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyuzhyk <fyuzhyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 15:00:22 by fyuzhyk           #+#    #+#             */
/*   Updated: 2022/04/12 13:58:53 by fyuzhyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../h_files/libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	size;
	unsigned int	src_size;
	unsigned int	result;
	unsigned int	n;

	n = 0;
	size = ft_strlen(dst);
	src_size = ft_strlen(src);
	result = size + src_size;
	if (dstsize <= 0)
		return (src_size);
	if (dstsize < size)
		return (result = dstsize + src_size);
	while (src[n] != '\0' && size < dstsize - 1)
		dst[size++] = src[n++];
	dst[size] = '\0';
	return (result);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char dest[30];
// 	ft_memset(dest, 'B', 4);
// 	char * src = (char *)"AAAAAAAAA";
// 	printf("%d\n", ft_strlcat(dest, src, 3));
// 	printf("%lu\n", strlcat(dest, src, 3));
// 	printf("My func: %lu\n", ft_strlcat(string1, string2, 7));
// 	printf("After ft_strlcat: %s\n", string1);
// 	printf("Str: %5lu\n", strlcat(string3, string4, 7));
// 	printf("After strlcat: %5s\n", string3);
// 	return (0);
// }
