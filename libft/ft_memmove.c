/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyuzhyk <fyuzhyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 14:59:12 by fyuzhyk           #+#    #+#             */
/*   Updated: 2022/04/14 12:10:52 by fyuzhyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*ptr_dst;
	char	*ptr_src;

	ptr_dst = (char *)dst;
	ptr_src = (char *)src;
	if (dst == src)
		return (dst);
	if (ptr_src < ptr_dst)
	{
		while (n != 0)
		{
			n--;
			*(ptr_dst + n) = *(ptr_src + n);
		}
		return (dst);
	}
	while (n != 0)
	{
		*ptr_dst = *ptr_src;
		ptr_dst++;
		ptr_src++;
		n--;
	}
	return (dst);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char sResult[] = {67, 68, 67, 68, 69, 0, 45};
// 	char sResult2[] = {67, 67, 68, 68, 69, 0, 45};
// 	ft_memmove(sResult + 1, sResult, 2);
// 	printf("Final: %s\n", sResult);
// 	return (0);
// }
