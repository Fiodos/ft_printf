/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyuzhyk <fyuzhyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 16:51:31 by fyuzhyk           #+#    #+#             */
/*   Updated: 2022/04/07 15:15:13 by fyuzhyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*start;
	t_list	*second_list;
	t_list	*curr;

	curr = lst;
	if (curr == 0)
		return (0);
	second_list = ft_lstnew(f(curr->content));
	if (second_list == 0)
		return (0);
	start = second_list;
	curr = curr->next;
	while (curr != 0)
	{
		second_list->next = ft_lstnew(f(curr->content));
		if (second_list->next == 0)
		{
			ft_lstclear(&start, del);
			return (0);
		}
		second_list = second_list->next;
		curr = curr->next;
	}
	return (start);
}

// int main()
// {
// 	t_list	*n1 = ft_lstnew("m1");
// 	t_list	*n2 = ft_lstnew("n2");
// 	t_list	*n3 = ft_lstnew("o3");

// 	n1->next = n2;
// 	n2->next = n3;
// 	n3->next = 0;

// 	t_list	*result = ft_lstmap(n1, f, NULL);
// 	printf("%s\n", (char *)result->content);
// 	//printf("%d\n", ft_lstsize(result));
// 	return (0);
// }
