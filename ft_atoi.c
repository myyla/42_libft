/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtouham <amtouham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 22:30:17 by amtouham          #+#    #+#             */
/*   Updated: 2022/12/02 18:11:50 by amtouham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int			i;
	int			s;
	long long	res;

	i = 0;
	s = 1;
	res = 0;
	while ((str[i] > 8 && str[i] < 14) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
		s = 1 - 2 * (str[i++] == '-');
	while (str[i] && str[i] >= '0' && str[i] <= '9')
		res = 10 * res + str[i++] - '0';
	return (res * s);
}
