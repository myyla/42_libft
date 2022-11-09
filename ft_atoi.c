/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtouham <amtouham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 22:30:17 by amtouham          #+#    #+#             */
/*   Updated: 2022/11/09 15:09:48 by amtouham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <limits.h>

int	ft_atoi(const char *str)
{
	int i;
	int s;
	int res;

	i = 0;
	s = 1;
	res = 0;
	
	//---------IF WHITESPACES THEN IGNORE
	while((str[i] > 8 && str[i] < 14) || str[i] == 32)
		i++;
		
		
	//---------SIGN OF NUMBER
	// if (str[i] == '-')
	// {
	// 	s = -1;
	// 	i++;
	// }
	// else if (str[i] == '+')
	// 	i++;
	
	//---------ANOTHER SMARTER WAY TO TREAT SIGN 
	if (str[i] == '-' || str[i] == '+')
    {
        s = 1 - 2 * (str[i++] == '-');
    }
	
	//---------CHECKING FOR VALID INPUT
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{ 
		// //HANDLING OVERFLOW TEST CASE
        // if (res > INT_MAX / 10
        //     || (res == INT_MAX / 10
        //     && str[i] - '0' > 7))
        // {
        //     if (s == 1)
        //         return INT_MAX;
        //     else
        //         return INT_MIN;
        // }
		res = 10 * res + str[i++] - '0';
	}
	return (res * s);
}