/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matprod <matprod42@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 22:36:32 by matprod           #+#    #+#             */
/*   Updated: 2023/11/16 22:36:32 by matprod          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*new;

	new = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!new)
		return (NULL);
	i = 0;
	while (s[i])
	{
		new[i] = (*f)(i, s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}

#include <stdio.h>
#include <stdlib.h> 


// Fonction de rappel : convertir chaque caractère en majuscule
char to_uppercase(unsigned int index, char c) {
    // Ignorer l'indice dans cet exemple
    (void)index;
    return (char)toupper(c);
}

int main() {
    // Test : Appliquer la fonction de rappel à chaque caractère de la chaîne
    const char str[] = "Hello, World!";
    char *result = ft_strmapi(str, to_uppercase);

    printf("Chaîne d'origine : %s\n", str);
    printf("Résultat : %s\n", result);

    free(result);
	


    return 0;
}