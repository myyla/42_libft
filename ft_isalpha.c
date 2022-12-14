/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtouham <amtouham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 13:03:34 by amtouham          #+#    #+#             */
/*   Updated: 2022/11/10 03:25:04 by amtouham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha( int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
