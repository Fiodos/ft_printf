/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyuzhyk <fyuzhyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 14:59:59 by fyuzhyk           #+#    #+#             */
/*   Updated: 2022/04/12 13:58:39 by fyuzhyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../h_files/libft.h"

static int	count_elements(char const *s, char c)
{
	int	i;
	int	count;
	int	len;

	i = 0;
	count = 1;
	while (s[i] != '\0')
	{
		if (s[i] != '\0' && s[i] != c)
		{
			len = 0;
			while (s[i] != '\0' && s[i] != c)
			{
				len++;
				i++;
			}
			if (len != 0)
				count++;
		}
		else
			i++;
	}
	return (count);
}

static int	get_element_len(char const *s, char c, int offset)
{
	int	len;

	len = 0;
	while (s[offset] != c && s[offset] != '\0')
	{
		len++;
		offset++;
	}
	return (len);
}

static char	*get_element(char const *s, char *element, char c, int offset)
{
	int	len;
	int	i;

	len = get_element_len(s, c, offset);
	element = malloc(sizeof(char) * len + 1);
	if (element == 0)
		return (0);
	i = 0;
	while (i < len)
	{
		element[i] = s[offset];
		i++;
		offset++;
	}
	element[i] = '\0';
	return (element);
}

static int	init_element(char **result, char *element, int k, int offset)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(element);
	result[k] = malloc(sizeof(char) * len + 1);
	if (result[k] == NULL)
		return (0);
	while (i < len)
	{
		result[k][i] = element[i];
		i++;
	}
	result[k][i] = '\0';
	i = offset + len;
	free(element);
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	char	*element;
	int		i;
	int		k;

	if (s == NULL)
		return (NULL);
	result = malloc(sizeof(char *) * count_elements(s, c));
	if (result == NULL)
		return (NULL);
	i = 0;
	k = 0;
	while (s[i] != '\0')
	{
		if (s[i] != '\0' && s[i] != c)
		{
			element = get_element(s, element, c, i);
			i = init_element(result, element, k, i);
			k++;
		}
		else
			i++;
	}
	result[k] = 0;
	return (result);
}

// #include <stdio.h>
// int main()
// {
// 	char **result = ft_split("tripouille", ' ');
// 	printf("%s\n", result[0]);
// 	return (0);
// }
