/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matprod <matprod42@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 18:03:49 by matprod           #+#    #+#             */
/*   Updated: 2023/11/14 18:03:49 by matprod          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	char	*new;

	if(!src)
		return NULL;

	new = malloc(sizeof(char) * (ft_strlen(src) + 1));

	if (!new)
		return NULL;
	i = 0;
	while (src[i])
	{
		new[i] = src[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

#include <stdio.h> // Pour la fonction printf
#include <stdlib.h> // Pour la fonction free
#include <string.h> // Pour la fonction strcmp

int main()
{
    // Test : Dupliquer une chaîne non vide
    const char str1[] = "Dragon de metal!";
    char *dup_str1 = ft_strdup(str1);

    printf("Test 1:\n");
    printf("Chaîne source : %s\n", str1);
    printf("Chaîne dupliquée : %s\n", dup_str1);

    if (strcmp(str1, dup_str1) == 0)
        printf("Le test a réussi.\n");
    else
        printf("Le test a échoué.\n");

    free(dup_str1); 

    // Test : Dupliquer une chaîne vide
    const char str2[] = "";
    char *dup_str2 = ft_strdup(str2);

    printf("\nTest 2:\n");
    printf("Chaîne source : %s\n", str2);
    printf("Chaîne dupliquée : %s\n", dup_str2);


    if (strcmp(str2, dup_str2) == 0)
        printf("Le test a réussi.\n");
    else
        printf("Le test a échoué.\n");

    free(dup_str2);

    return 0;
}