/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtouham <amtouham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 13:47:48 by amtouham          #+#    #+#             */
/*   Updated: 2022/11/11 16:26:36 by amtouham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst -> next)
		lst = lst ->next;
	return (lst);
}

// int	main()
// {
// 	t_list *t1,*temp;
// 	t1 = (t_list *)malloc(sizeof(t_list));
// 	t1->next = (t_list *)malloc(sizeof(t_list));
// 	t1->next->next = (t_list *)malloc(sizeof(t_list));
// 	t1->next->next->next = (t_list *)malloc(sizeof(t_list));
// 	t1->next->next->next->next = NULL;
// 	temp = t1;
// 	while(temp)
// 	{
// 		temp->content = "amal";
// 		temp = temp ->next;
// 	}
// 	printf("%s",ft_lstlast(t1)->content);
// }