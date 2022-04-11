/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyuzhyk <fyuzhyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 15:00:59 by fyuzhyk           #+#    #+#             */
/*   Updated: 2022/04/07 15:03:49 by fyuzhyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_start(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	control;

	i = 0;
	while (s1[i])
	{
		j = 0;
		control = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
				control = 1;
			j++;
		}
		if (control == 0)
			return (i);
		i++;
	}
	return (i);
}

static int	get_end(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	control;

	i = ft_strlen(s1) - 1;
	while (i >= 0)
	{
		j = 0;
		control = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
				control = 1;
			j++;
		}
		if (control == 0)
			return (i);
		i--;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*result;
	int				start;
	int				end;
	unsigned int	i;

	if (s1 == NULL)
		return (NULL);
	i = 0;
	start = get_start(s1, set);
	end = get_end(s1, set);
	if (end == -1 && start == (int)ft_strlen(s1))
	{
		result = malloc(sizeof(char) * 1);
		result[i] = '\0';
		return (result);
	}
	result = malloc(sizeof(char) * (end - start) + 2);
	if (result == NULL)
		return (NULL);
	while (start <= end)
		result[i++] = s1[start++];
	result[i] = '\0';
	return (result);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char	*s1 = "   \t  \n\n \t\t  \n\n\n\n   \n \n \t\t\n  ";
// 	//char	*s2 = "Hello \t  Please\n Trim me !";
// 	char	*result = ft_strtrim(s1, " \n\t");
// 	// printf("solution: %s\n", s2);
// 	// printf("\n");
// 	// printf("result: %s\n", result);
// 	// printf("%d\n", strcmp(result, s2));
// 	return (0);
// }
