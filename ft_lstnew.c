/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtouham <amtouham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 16:21:22 by amtouham          #+#    #+#             */
/*   Updated: 2022/11/11 16:25:22 by amtouham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

// int	main()
// {
//     t_list *t1,*t2,*t3;

//     t1 =ft_lstnew("myla");     
//     t2 =ft_lstnew("zwina");     
//     t3 =ft_lstnew("bejaaff");
//     t1 -> next = t2;     
//     t2 -> next = t3;
//     t_list *tmp = t1;
//             //--------------
//             // t_list *head;
//             // t_list *tmp;
//             // head  = (t_list *)malloc(sizeof(t_list));
//             // tmp = head;
//             // int i = -1;
//             // while(++i < 5)
//             // {
//             //     tmp->content = "phobos";
//             //     tmp->next = (t_list *)malloc(sizeof(t_list));
//             //     tmp = tmp->next;
//             // }
//             // tmp->next = NULL;
//     while(tmp)
//     {
//         printf("%s\t",tmp->content);
//         tmp = tmp->next;
//     } 	
// }