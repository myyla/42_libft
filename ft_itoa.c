/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtouham <amtouham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:41:53 by amtouham          #+#    #+#             */
/*   Updated: 2022/11/09 20:56:05 by amtouham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include "libft.h"

static int	lenofInt(long c)
{
	int	i;

	i = 0;
	if (c < 0)
		i++;
	if (c == 0)
		return (1);
	while (c != 0)
	{
		c /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		i;
	long	x;

	i = 0;
	x = n;
	len = lenofInt(n);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (0);
	if (x < 0)
	{
		str[0] = '-';
		i = 1;
		x *= (-1);
	}
	str[len] = '\0';
	while (len > i)
	{
		len--;
		str[len] = (x % 10) + 48;
		x /= 10;
	}
	return (str);
}

// char *ft_itoa(int n)
// {
// 	char *str;
// 	char *c;
// long x;

// x = n;
// str = malloc(lenofInt(x)*sizeof(char) + 1);
// if (!str)
// 		return (0);
// c = malloc(sizeof(char) + 1);
// if (!c)
// 		return (0);
// if (x == -2147483648)
// 	{
// 		str[0] = '-';
// 		ft_strjoin(str,"2");
// 		x = 147483648;
// 	}
// 	if (n < 0)
// 	{
// 		str[0] = '-';
// 		n *= -1;
// 	}
// 	if (x >= 10)
// 	{
// 		ft_itoa(x / 10);
// 		ft_itoa(x % 10);
// 	}
// 	else
// 	{
// 		x += 48;
// 		c[0] = x + 48;
// 		return(ft_strjoin(str,c));
// 	}
// 	return(0);
// }
