/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtouham <amtouham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 20:08:47 by amtouham          #+#    #+#             */
/*   Updated: 2022/12/02 04:32:55 by amtouham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*pdst;
	const char	*psrc;

	if (src < dst)
	{
		psrc = src + len - 1;
		pdst = dst + len - 1;
		while (len-- > 0)
			*(pdst--) = *(psrc--);
		return (dst);
	}
	if (src > dst)
		ft_memcpy(dst, src, len);
	return (dst);
}
