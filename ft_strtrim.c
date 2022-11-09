/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtouham <amtouham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 18:02:31 by amtouham          #+#    #+#             */
/*   Updated: 2022/11/09 12:15:43 by amtouham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	const char	*debutTrim;
	const char	*finTrim;
	int			len;

	if (!s1 || !set)
		return (NULL);
	len = ft_strlen(s1);
	debutTrim = s1;                 // fait pointer i sur le debut du string dans un premier lieu 
	finTrim = s1 + len - 1;       // fait pointer j sur la fin du string dans un deuxieme lieu
	while (*debutTrim && ft_strchr(set, *debutTrim)) //UNE FOIS TROUVE DANS S1 UN CARACTERE QUI N EXISTE PAS DANS SET BOUCLE STOP HERE //*i --> cas de *s1 ="" exclut  // cas *set = "" ne rentre pas au while a cause de ft_strchr
		debutTrim++;                         //Dans cette etape i pointe sur le debut du string a trimer
	if(debutTrim == s1 + len)           //cas de *s1 ="" inclut aussi car len = 0 // du cout *set = "" ne rentre pas ici egalement car elle n est pas rentre dans la boucle precedente et donc ne s incremente jamais donc reste a sa valeur i = s1
		return (ft_strdup(""));
	while (*finTrim && ft_strchr(set, *finTrim))
		finTrim--;                              //dans cette etape pointe sur la fin du string a trimer 
	return (ft_substr(debutTrim, 0, finTrim - debutTrim + 1)); // donc dans le cas *set = "" s affiche la meme string s1 car i et j restent les memes
}