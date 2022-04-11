/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyuzhyk <fyuzhyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 16:17:26 by fyuzhyk           #+#    #+#             */
/*   Updated: 2022/04/02 11:13:16 by fyuzhyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	del(lst->content);
	free(lst);
}

// #include <stdio.h>
// int main()
// {
// 	t_list	*head = ft_lstnew("head");
// 	t_list	*n2 = ft_lstnew("n2");
// 	t_list	*n3 = ft_lstnew("n3");
// 	//t_list	*n4 = ft_lstnew("n4");
// 	t_list	*l = ft_lstnew(malloc(1));

// 	head->next = n2;
// 	n2->next = n3;
// 	n3->next = NULL;

// 	printf("%p\n", l);
// 	del(l);
// 	printf("%p\n", l);
// 	return (0);
// }
