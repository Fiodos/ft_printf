/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyuzhyk <fyuzhyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 15:00:40 by fyuzhyk           #+#    #+#             */
/*   Updated: 2022/04/07 14:24:42 by fyuzhyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char				*result;
	unsigned int		i;
	int					len;

	i = 0;
	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	if (len == 0)
		result = malloc(sizeof(char));
	else
		result = malloc(sizeof(char) * len + 1);
	if (result == 0)
		return (0);
	while (s[i] != '\0')
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

// 	char	mapi(unsigned int i, char c)
// 	{
// 	static int indexArray[11] = {0};

// 	if (i > 10 || indexArray[i] == 1)
// 		write(1, "wrong index\n", 12);
// 	else
// 		indexArray[i] = 1;
// 	if (c >= 'a' && c <= 'z')
// 		return (c - 32);
// 	else if (c >= 'A' && c <= 'Z')
// 		return (c + 32);
// 	else
// 		return (c);
// 	}
// #include <string.h>
// #include <stdio.h>
// int main()
// {

// 	char str1[] = "AbCdE";
// 	char* str2;
// 	str2 = ft_strmapi(str1, *mapi);
// 	printf("%p\n", str1);
// 	printf("%p\n", str2);
// 	printf("%s\n", str2);
// }
