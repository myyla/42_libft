/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtouham <amtouham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 13:32:16 by amtouham          #+#    #+#             */
/*   Updated: 2022/11/11 13:32:25 by amtouham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

// int main()
// {
// 	t_list *t1, *t2,*t3,*new,*tmp;
// 	t1 = ft_lstnew("amal");
// 	t2 = ft_lstnew("is");
// 	t3 = ft_lstnew("myla");
// 	new = ft_lstnew("Miss");
// 	t1->next = t2;
// 	t2 ->next = t3;
// 	ft_lstadd_front(&t1, new);
// 	tmp = new;
// 	while(tmp)
//     {
//         printf("%s\t",tmp->content);
//         tmp = tmp->next;
//     } 
// }