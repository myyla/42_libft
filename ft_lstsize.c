/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtouham <amtouham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 13:33:31 by amtouham          #+#    #+#             */
/*   Updated: 2022/11/11 16:22:11 by amtouham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	if (!lst)
		return (0);
	i = 0;
	while (lst)
	{
		lst = lst ->next;
		i++;
	}
	return (i);
}

// int	main()
// {
// 	t_list *t1,*t2,*tmp;
// 	t1 = ft_lstnew("harry");
// 	t2 = ft_lstnew("amal");
// 	ft_lstadd_front(&t1,t2);
// 	printf("%d",ft_lstsize(t1));
// }