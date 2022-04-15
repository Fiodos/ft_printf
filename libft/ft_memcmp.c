/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyuzhyk <fyuzhyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 14:59:02 by fyuzhyk           #+#    #+#             */
/*   Updated: 2022/04/14 12:10:47 by fyuzhyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int	result;

	result = 0;
	while (n > 0)
	{
		if (*(unsigned char *)s1 != *(unsigned char *)s2)
			return (*(unsigned char *)s1 - *(unsigned char *)s2);
		result = *(unsigned char *)s1 - *(unsigned char *)s2;
		s1++;
		s2++;
		n--;
	}
	return (result);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char *str1 = "Hallo";
//     char *str2 = "H";

//     int ret = memcmp(str1, str2, 1);
//     printf("%d\n", ret);
//     printf("memcmp: ");
//     if(ret > 0)
//       printf("   str2 is less than str1");
//     else if(ret < 0)
//       printf("str1 is less than str2");
//     else
//       printf("str1 is equal to str2");

//     printf("\n");

//     int ret2 = ft_memcmp(str1, str2, 1);
//     printf("%d\n", ret2);
//     printf("ft_memcmp: ");
//     if(ret2 > 0)
//       printf("str2 is less than str1");
//     else if(ret2 < 0)
//       printf("str1 is less than str2");
//     else
//       printf("str1 is equal to str2");
//     return (0);
// }
