/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtouham <amtouham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 12:31:38 by amtouham          #+#    #+#             */
/*   Updated: 2022/11/09 12:12:46 by amtouham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include "libft.h"
char * ft_substr(char const *s, unsigned int start, size_t len)
{
    char * sub;
    size_t i;

    if(!s || len < 0 || start < 0)
        return (0);
    if((!(*s) && !len )|| start > ft_strlen(s))
		return (ft_strdup(""));
    if(len >= ft_strlen(s))  
        len = ft_strlen(s) - start;   //si len > size of our main string so we take the len of s - start
    sub = malloc((len+1) * sizeof(char));
	if(!sub)
        return (0);
    i = 0;
    while(i < len && s[i + start] && start <= ft_strlen(s)) // i comm de 0  et len comm de 1
    {
        sub[i] = s[i + start];
        i++;
    }
    sub[i] = '\0';
    return (sub);
}

// int main()
// {
//     char s[] = "sjhfmv  ty ktutk7tty";
//     printf("%s", ft_substr(s,7575875,1));
// }

// int main()
// {
//     char s[] = "";
//     //printf("%s", ft_substr(s, 4967296, 6));
// 	printf("%s", ft_substr(s, 1, 3));
// }