/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyuzhyk <fyuzhyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 15:00:14 by fyuzhyk           #+#    #+#             */
/*   Updated: 2022/04/07 10:18:09 by fyuzhyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// void	f(unsigned int i, char *c)
// {
// 	*c += 1;
// }

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (s == 0)
		return ;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

// #include <stdio.h>
// int main()
// {
// 	char str[] = "abc";
// 	ft_striteri(str, *f);
// 	printf("%s\n", str);
// 	return (0);
// }
