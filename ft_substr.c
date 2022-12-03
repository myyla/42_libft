/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtouham <amtouham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 12:31:38 by amtouham          #+#    #+#             */
/*   Updated: 2022/12/03 14:30:28 by amtouham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	size_t			i;
	unsigned int	slen;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	slen = ft_strlen(s + start);
	if (len > slen)
		len = slen;
	i = 0;
	sub = malloc(len + 1);
	if (!sub)
		return (NULL);
	slen = ft_strlen(s);
	i = -1;
	while (++i < len && s[i + start] && start < slen)
		sub[i] = s[i + start];
	sub[i] = '\0';
	return (sub);
}
