/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtouham <amtouham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 08:35:37 by amtouham          #+#    #+#             */
/*   Updated: 2022/10/17 09:18:28 by amtouham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int i;
    
    i = ft_strlen(s);
    while(i >= 0)
    {
        if(s[i] == (char)c)
            return ((char *)&s[i]);
        i--; 
    }
    return (NULL);
}