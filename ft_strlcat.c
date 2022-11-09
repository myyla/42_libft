/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtouham <amtouham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:26:03 by amtouham          #+#    #+#             */
/*   Updated: 2022/11/07 16:27:18 by amtouham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t slen;
	size_t dlen;
	size_t d;

	slen = ft_strlen(src);
	if ((!dst && !dstsize) || !dstsize)
		return (slen);
	dlen = ft_strlen(dst); // after treating the null dst case to avoid seg of strlen
	d = dlen;
	if (dstsize <= dlen)
		return (dstsize + slen);
	while(*dst != '\0' && dlen-- > 0)
			dst++;
	dlen = d;
	dstsize = dstsize - dlen - 1;	
	while(*src && dstsize-- > 0)
		*(dst++) = *(src++);
	*dst = '\0';
	return(dlen + slen);
}
