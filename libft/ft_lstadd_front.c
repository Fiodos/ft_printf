/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyuzhyk <fyuzhyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 13:25:34 by fyuzhyk           #+#    #+#             */
/*   Updated: 2022/04/14 12:10:18 by fyuzhyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

// #include <stdio.h>
// int main()
// {
// 	t_list	*head = ft_lstnew("head");
// 	t_list	*n2 = ft_lstnew("n2");
// 	t_list	*n3 = ft_lstnew("n3");

// 	head->next = n2;
// 	n2->next = n3;
// 	n3->next = NULL;

// 	printf("%p\n", head);
// 	ft_lstadd_front(&head, n2);
// 	printf("%p\n", head);
// 	return (0);
// }
