/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyuzhyk <fyuzhyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 15:00:44 by fyuzhyk           #+#    #+#             */
/*   Updated: 2022/04/12 13:59:04 by fyuzhyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../h_files/libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*s1_ptr;
	unsigned char	*s2_ptr;

	i = 0;
	s1_ptr = (unsigned char *)s1;
	s2_ptr = (unsigned char *)s2;
	while (((*s1_ptr != '\0') || (*s2_ptr != '\0')) && (i < n))
	{
		if (*s1_ptr < *s2_ptr)
			return (-1);
		else if (*s1_ptr > *s2_ptr)
			return (1);
		s1_ptr++;
		s2_ptr++;
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char string1[] = "1";
// 	char string2[] = "1";

// 	printf("My func: %d\n", ft_strncmp(string2, string1, 0));
// 	printf("Str: %d\n", strncmp(string2, string1, 0));

// 	printf("%d\n", strncmp("test\200", "test\0", 6));
// 	printf("%d\n", ft_strncmp("test\200", "test\0", 6));

// 	return (0);
// }
