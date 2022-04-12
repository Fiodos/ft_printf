/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_spec.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyuzhyk <fyuzhyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 10:54:52 by fyuzhyk           #+#    #+#             */
/*   Updated: 2022/04/12 13:55:36 by fyuzhyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../h_files/ft_printf.h"
#include "../h_files/libft.h"

char	*init_spec(char *str)
{
	char	*spec;

	spec = malloc(sizeof(char) * 10);
	ft_strcpy(spec, str);
	return (spec);
}
