/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtouham <amtouham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 19:14:54 by amtouham          #+#    #+#             */
/*   Updated: 2022/12/03 14:06:02 by amtouham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*new;

	if (!lst || !f || !del)
		return (NULL);
	head = NULL ;
	while (lst)
	{
		new = ft_lstnew(f(lst -> content));
		if (!new)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, new);
		lst = lst -> next;
	}
	return (head);
}

// void * f(void * content)
// {
// 	content = "WORLDCUPWON";
// 	return (content);
// }

// void del(void* content)
// {
// 	free(content);
// }

// int main()
// {
// 	t_list *t1,*tmp;
// 	t1 = (t_list*)malloc(sizeof(t_list));
// 	t1->next = (t_list*)malloc(sizeof(t_list));
// 	t1->next->next = (t_list*)malloc(sizeof(t_list));
// 	t1->next->next->next = NULL;
// 	tmp = t1;
// 	while(tmp)
// 	{
// 		tmp ->content = ft_strdup("hello");
// 		tmp = tmp-> next;
// 	}
// 	tmp = ft_lstmap(t1,f,del);
// 	while(tmp)
// 	{
// 		printf("%s\t", tmp->content);
// 		tmp = tmp ->next;
// 	}
// }