/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyuzhyk <fyuzhyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 15:00:03 by fyuzhyk           #+#    #+#             */
/*   Updated: 2022/04/02 11:19:59 by fyuzhyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (unsigned char)c)
			return ((char *)s + i);
		i++;
	}
	if (c == '\0')
		return ((char *)s + i);
	return (0);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char *str = "Hello there";
//     char c = 'e';

//     printf("%s\n", ft_strchr(str, c));
// 	printf("%s\n", strchr(str, c));
//     return (0);
// }
