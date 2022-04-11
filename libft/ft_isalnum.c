/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyuzhyk <fyuzhyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 14:58:27 by fyuzhyk           #+#    #+#             */
/*   Updated: 2022/03/31 10:18:21 by fyuzhyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	else if (c > 47 && c < 58)
		return (1);
	return (0);
}

// #include <stdio.h>
// int main()
// {
//     int c = '!';
//     printf("%d\n", ft_isalnum(c));
//     return (0);
// }