/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtouham <amtouham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 22:21:59 by amtouham          #+#    #+#             */
/*   Updated: 2022/11/11 22:42:56 by amtouham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *temp;
	
	temp =lst;
	ft_lstdelone(lst,del);
	while(temp)
	{
		temp = temp->next;
		ft_lstdelone(*lst,del);
	}
}

void	del(void *c)
{
	free(c);
}

int main()
{
	t1 = ft_lstnew("myla");
	t2 = ft_lstnew("marigold");
	t3 = ft_lstnew("amal");
	t4 = ft_lstnew("same");
	ft_lstadd_back(*t1,t2);
	ft_lstadd_back(*t2,t2);
	ft_lstadd_back(*t1,t2);
}