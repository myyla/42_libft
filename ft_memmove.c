/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtouham <amtouham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 20:08:47 by amtouham          #+#    #+#             */
/*   Updated: 2022/11/05 22:23:44 by amtouham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
	char		*pdst;
	const char	*psrc;
    
    if(dst == src)
        return (dst);
	//condition of overlapping
	if(src < dst)
	{
		psrc = src + len - 1;
		pdst = dst + len - 1;
		while(len-- > 0)
			*(pdst--) = *(psrc--);
		return (dst);
	}
	else
		ft_memcpy(dst, src, len);
    return (dst);
}

// int main()
// {
//     // Write C code here
//     char s[]="UpDown";
//     char s2[]="UpDown";
//     printf("%s\n", ft_memmove(s+2,s,4));
//     printf("%s", memmove(s2+2,s2,4));
// }
