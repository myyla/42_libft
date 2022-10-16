/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtouham <amtouham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 22:10:37 by amtouham          #+#    #+#             */
/*   Updated: 2022/10/16 22:34:43 by amtouham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * ft_strchr(const char *s, int c)
{
    size_t i;
    
    i =0;
    while(i <= ft_strlen(s))
    {
        if(s[i] == (char)c)
            return ((char *)&s[i]);
        i++;
    }
    return (NULL);
}