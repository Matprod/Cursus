/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matprod <matprod42@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 13:40:24 by matprod           #+#    #+#             */
/*   Updated: 2023/11/20 13:40:24 by matprod          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    if (s == NULL || f == NULL)
        return;

    unsigned int i = 0;

    while (s[i] != '\0')
	{
        f(i, &s[i]);
        i++;
    }
}

/*#include <stdio.h> 

void print_char_and_index(unsigned int index, char *c) {
    printf("Caractère à l'indice %u : %c\n", index, *c);
}

int main()
{

    char str[] = "Dragon de metal";
    printf("Chaîne originale : %s\n", str);

    ft_striteri(str, print_char_and_index);

    return 0;
}*/