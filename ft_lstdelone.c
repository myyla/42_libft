/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtouham <amtouham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:32:55 by amtouham          #+#    #+#             */
/*   Updated: 2022/12/03 12:45:37 by amtouham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

// void	del(void *c)
// {
// 	(void)c;
// }

// void	del(void *c)
// {
// 	free(c);
// }

// int	main()
// {
//  	t_list* head;
//     t_list* second;
//     t_list* third ;
//     t_list* tmp;
//     // allocate 3 nodes in the heap
//     head = (t_list*)malloc(sizeof(t_list));
//     second = (t_list*)malloc(sizeof(t_list));
//     third = (t_list*)malloc(sizeof(t_list));
//     head->next = second;
// 	second->next = third;
//     third->next = NULL;
// 	head->content = ft_strdup("1");
// 	second->content = ft_strdup("2");
// 	third->content = ft_strdup("3"); 
// 	ft_lstdelone(head, del);
// 	tmp = head;
// 	while(tmp)
// 	{
// 		printf("%s\n",tmp->content);
// 		tmp = tmp -> next ;
// 	}
// }