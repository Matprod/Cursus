/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matprod <matprod42@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 12:55:21 by matprod           #+#    #+#             */
/*   Updated: 2023/11/16 12:55:21 by matprod          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	const char	nl = '\n';

	write(fd, s, ft_strlen(s));
	write(fd, &nl, 1);
}

/*int main() {
    // Test : Écrire une chaîne de caractères suivie d'une nouvelle ligne dans la sortie standard (1)
    char str1[] = "Dragon de metal";
    ft_putendl_fd(str1, 1);

	return 0;
}*/