/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtouham <amtouham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 19:49:38 by amtouham          #+#    #+#             */
/*   Updated: 2022/12/03 12:07:13 by amtouham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	ft_lstlast(*lst)->next = new;
}

// int main()
// {
// 	t_list *t1,*new,*tmp;

// 	t1 = (t_list*)malloc(sizeof(t_list));	
// 	t1 ->next = (t_list*)malloc(sizeof(t_list));	
// 	t1 ->next->next = (t_list*)malloc(sizeof(t_list));	
// 	t1 ->next->next->next = NULL;
// 	tmp = t1;
// 	while(tmp)
// 	{
// 		tmp ->content ="girl";
// 		tmp = tmp ->next;
// 	}
// 	new = (t_list *)malloc(sizeof(t_list));
// 	new->content = "amal";
// 	new->next = NULL;
// 	ft_lstadd_back(&t1,new);
// 	printf("%s",ft_lstlast(t1)->content);
// }