/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyuzhyk <fyuzhyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 15:00:54 by fyuzhyk           #+#    #+#             */
/*   Updated: 2022/03/31 10:39:31 by fyuzhyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	j;

	i = 0;
	j = -1;
	while (s[i] != '\0')
	{
		if (s[i] == (unsigned char)c)
			j = i;
		i++;
	}
	if ((s[i] == '\0') && (c == '\0'))
		return ((char *)s + i);
	if (j != -1)
		return ((char *)s + j);
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char *str = "Hello there";
//     char c = 'l';

//     printf("%s\n", ft_strrchr(str, c));
//     return (0);
// }
