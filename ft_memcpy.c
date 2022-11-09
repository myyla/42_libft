/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtouham <amtouham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 17:12:47 by amtouham          #+#    #+#             */
/*   Updated: 2022/11/07 09:41:56 by amtouham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *to, const void *from, size_t numBytes)
{
    unsigned char *pto;
    unsigned char *pfrom;

    pto = to;
    pfrom = (unsigned char *)from;
    
    if(pto == pfrom)
        return (to);
    while(numBytes-- > 0)
        *(pto++) = *(pfrom++);
    return (to);
}

// int main()
// {  
//     char s[] = "UpDown";
//     char p[] = "UpDown"; 
//     printf("%s",(char *)ft_memcpy(NULL,NULL,3)); // --> return NULL
//     printf("%s",(char *)ft_memcpy(NULL,"abc",3)); // 0x0 NULL forbidden address --> Segmentation fault
//     printf("%s",(char *)ft_memcpy("abc","abc",3)); // --> return dst
//     printf("%s\n",(char *)ft_memcpy(s + 2,s,4)); // does not treat overlap
//     printf("%s",(char *)memmove(p + 2,p ,4)); // treats overlap
// }