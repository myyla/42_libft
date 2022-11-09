/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtouham <amtouham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 09:48:03 by amtouham          #+#    #+#             */
/*   Updated: 2022/11/07 11:24:31 by amtouham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

 size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
 {
	size_t slen;
	slen = ft_strlen(src);
	if (dstsize != 0)
	{
		dstsize--;  //cuz we have to copy dstsize - 1 characters
		while(*src && (dstsize-- > 0))
		{
			*dst = *src;
			dst++;
			src++;
		}
		*dst = 0;
	}
	return (slen);
 }

// size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
// {
// 	size_t	i;

// 	i = 0;
// 	if (dstsize != 0)
// 	{
// 		while (src[i] && i < dstsize - 1)
// 		{
// 			dst[i] = src[i];
// 			i++;
// 		}
// 		dst[i] = '\0';
// 	}
// 	return (ft_strlen(src));
// }