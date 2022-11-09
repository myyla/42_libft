/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtouham <amtouham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 10:54:08 by amtouham          #+#    #+#             */
/*   Updated: 2022/11/05 16:43:59 by amtouham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
//MEMORY SETTER
void *ft_memset(void *ptr, int x, size_t n) //n bytes of x || void ptr? So that we can pass any type of pointer to this function || size_t ? we want only non-negative values cuz we want amount of bytes
{
	unsigned char *p;
	p = ptr; //ok in C, implicit cast
	//p= (unsigned char*)ptr;
	while(n-- > 0)
		*p++ = (unsigned char)x; //explicit cast from int to unsig char
	return ptr;
}



// SOME MAIN EXAMPLES

// int main()
// {
// 	int i = 200000;
// 	//1912
// 	ft_memset(&i,0,3);
// 	ft_memset(&i,7,2);
// 	ft_memset(&i,120,1);
// 	printf("%d",i);
// 	return 0;
// }

// int main(){
// 	int i = 0;
// 	//1337 in binary is 5 (2nd byte) 57(1st byte)
// 	ft_memset(&i,57,1);
// 	ft_memset((char *)&i+1, 5, 1);
// 	printf("%d",i);
// 	}

//WHY IS MEMESET() USED  -->memory initialization -- Initialize dest with null bytes for good practice