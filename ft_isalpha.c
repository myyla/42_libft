/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtouham <amtouham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 13:03:34 by amtouham          #+#    #+#             */
/*   Updated: 2022/10/16 20:39:12 by amtouham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ft_isalpha(0x05)---> EOF 
// unsigned char ---> 0 - 255
int	ft_isalpha( int c)
{
	if ((c >= 97 && c <= 122)
		|| (c >= 65 && c <= 90))
        return(1);  
	else
		return (0);   
}