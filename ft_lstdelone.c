/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtouham <amtouham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:32:55 by amtouham          #+#    #+#             */
/*   Updated: 2022/11/11 19:48:12 by amtouham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!del || !lst)
		return ;
	del(lst->content);
	free(lst);
}

// void	del(void *c)
// {
// 	free(c);
// }

// int	main()
// {
//  	t_list* head = NULL;
//     t_list* second = NULL;
//     t_list* third = NULL;
  
//     // allocate 3 nodes in the heap
//     head = (t_list*)malloc(sizeof(t_list));
//     second = (t_list*)malloc(sizeof(t_list));
//     third = (t_list*)malloc(sizeof(t_list));
// 	head->content = "1";
//     head->next = second;
// 	second->content = "2";
// 	second->next = third;
// 	third->content = "3"; 
//     third->next = NULL;

// 	ft_lstdelone(head, del);
// 	printf("%s",head -> content);
// }