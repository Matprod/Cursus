/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matprod <matprod@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 20:09:25 by matprod           #+#    #+#             */
/*   Updated: 2023/11/24 21:38:08 by matprod          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;
	char	*new_start = NULL;

	while (start-- > 0 && *s)
		s++;
	new = malloc(sizeof(char) * (len + 1));
	if (!new)
		return (NULL);
	new_start = new; 
	while (len-- > 0 && *s)
	{
		*new = *s;
		new ++;
		s++;
	}
	*new = '\0'; 
	return new_start;
}

/*#include <stdio.h>

int main()
{
	char *str = "dragon de metal";
	char *new = ft_substr(str, 14, 16);
	printf("%s", new);
	free(new); 
	return 0;
}*/