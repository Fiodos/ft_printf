/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyuzhyk <fyuzhyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 15:33:31 by fyuzhyk           #+#    #+#             */
/*   Updated: 2022/04/12 13:57:35 by fyuzhyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../h_files/libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*curr;
	t_list	*next;
	t_list	**start;

	curr = (*lst);
	start = lst;
	while (curr != 0)
	{
		next = curr;
		curr = curr->next;
		ft_lstdelone(next, del);
	}
	*start = curr;
}
