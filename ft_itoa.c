/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtouham <amtouham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:41:53 by amtouham          #+#    #+#             */
/*   Updated: 2022/11/10 03:22:03 by amtouham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	lenofint(long c)
{
	int	i;

	i = 0;
	if (c < 0)
		i++;
	if (c == 0)
		i++;
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
	len = lenofint(n);
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
