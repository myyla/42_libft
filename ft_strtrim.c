/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtouham <amtouham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 18:02:31 by amtouham          #+#    #+#             */
/*   Updated: 2022/12/02 18:25:41 by amtouham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	const char	*debuttrim;
	const char	*fintrim;
	int			len;

	if (!s1 || !set)
		return (NULL);
	len = ft_strlen(s1);
	debuttrim = s1;
	fintrim = s1 + len - 1;
	while (*debuttrim && ft_strchr(set, *debuttrim))
		debuttrim++;
	if (debuttrim == s1 + len)
		return (ft_strdup(""));
	while (*fintrim && ft_strchr(set, *fintrim))
		fintrim--;
	return (ft_substr(debuttrim, 0, fintrim - debuttrim + 1));
}
