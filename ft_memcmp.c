/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtouham <amtouham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 08:03:31 by amtouham          #+#    #+#             */
/*   Updated: 2022/11/08 21:52:15 by amtouham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *ps1;
	unsigned char *ps2; //0 -255

	ps1 = (unsigned char *)s1;
	ps2 = (unsigned char *)s2;
	
	while(n-- > 0)
	{
		if(*ps1 == *ps2)
		{	
			ps1++;
			ps2++;
		}
		else
			return (*ps1 - *ps2);
	}
	return (0);
}