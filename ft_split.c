/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matprod <matprod42@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 06:42:11 by matprod           #+#    #+#             */
/*   Updated: 2023/11/18 06:42:11 by matprod          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_charset_in(char c, char charset);

static int	ft_strlen_charset(const char *str, char charset)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && ft_charset_in(str[i], charset) == 0)
		i++;
	return (i);
}

static int	ft_charset_in(char c, char charset)
{

	if (c == charset)
		return (1);

	return (0);
}

static int	count_words(const char *str, char charset)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (str[i])
	{
		while (str[i] != '\0' && ft_charset_in(str[i], charset) == 1)
			i++;
		if (str[i] != '\0')
			words++;
		while (str[i] != '\0' && ft_charset_in(str[i], charset) == 0)
			i++;
	}
	return (words);
}

static char	*ft_strdup_charset(const char *str, char charset)
{
	int		len;
	int		i;
	char	*string;

	len = ft_strlen_charset(str, charset);
	string = (char *)malloc(sizeof(char) * len + 1);
	if (!string)
		return (NULL);
	i = 0;
	while (i < len)
	{
		string[i] = str[i];
		i++;
	}
	string[i] = '\0';
	return (string);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		i;

	i = 0;
	array = (char **)malloc(sizeof(char *) * (count_words(s, c)
				+ 1));
	if (!array)
		return (NULL);
	while (*s)
	{
		while (*s && ft_charset_in(*s, c) == 1)
			s++;
		if (*s)
		{
			array[i] = ft_strdup_charset(s, c);
			if (!array[i])
				return (NULL);
			i++;
		}
		while (*s && ft_charset_in(*s, c) == 0)
			s++;
	}
	array[i] = NULL;
	return (array);
}


/*#include <stdio.h> 
#include <stdlib.h> 

int main() {

    char str1[] = "Dragon de metal!";
    char charset1 = ' ';
    char **result1 = ft_split(str1, charset1);

    printf("Test 1:\n");
    int i = 0;
    while (result1[i] != NULL) {
        printf("[%d] : %s\n", i, result1[i]);
        free(result1[i]);
        i++;
    }
    free(result1);

    char str2[] = "pomme,orange,banane,raisin";
    char charset2 = ',';
    char **result2 = ft_split(str2, charset2);

    printf("\nTest 2:\n");
    i = 0;
    while (result2[i] != NULL) {
        printf("[%d] : %s\n", i, result2[i]);
        free(result2[i]);
        i++;
    }
    free(result2);

    return 0;
}*/