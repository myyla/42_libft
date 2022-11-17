/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtouham <amtouham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 17:12:47 by amtouham          #+#    #+#             */
/*   Updated: 2022/11/12 13:47:13 by amtouham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t numBytes)
{
	char	*pdst;
	char	*psrc;

	pdst = dst;
	psrc = (char *)src;
	if (pdst == psrc)
		return (dst);
	while (numBytes-- > 0)
		*(pdst++) = *(psrc++);
	return (dst);
}
