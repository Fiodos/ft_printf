/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyuzhyk <fyuzhyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 15:00:18 by fyuzhyk           #+#    #+#             */
/*   Updated: 2022/04/12 13:58:50 by fyuzhyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../h_files/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		s1_len;
	int		s2_len;
	int		i;
	char	*str;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	i = 0;
	str = malloc(sizeof(char) * (s1_len + s2_len) + 1);
	if (str == 0)
		return (0);
	while (i < (s1_len + s2_len))
	{
		while (i < s1_len)
		{
			str[i++] = *s1;
			s1++;
		}
		str[i++] = *s2;
		s2++;
	}
	str[s1_len + s2_len] = '\0';
	return (str);
}

// #include <stdio.h>
// int main()
// {
// 	char *s1 = "Hey ";
// 	char *s2 = "there!";
// 	printf("%s\n", ft_strjoin(s1, s2));
// 	return (0);
// }
