/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matprod <matprod@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 13:41:10 by mvoisin           #+#    #+#             */
/*   Updated: 2023/11/29 12:19:08 by matprod          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*ccbd;

	while (*lst)
	{
		ccbd = (*lst)->next;
		ft_lstdelone(*lst, *del);
		*lst = ccbd;
	}
}
/*#include "stdio.h"
void test(void *content)
{
	printf("%s\n", (char *)content);
	free(content);
}

int main()
{
    // Création d'une liste simple pour le test
	char *test1 = malloc(5);
	char *test2 = malloc(5);
	char *test3 = malloc(5);

	for (int i = -1; ++i<5;) {
		test1[i] = i == 4 ? '\0' : 'A' + i;
		test2[i] = i == 4 ? '\0' : 'A' + i;
		test3[i] = i == 4 ? '\0' : 'A' + i;
	}

    t_list *head = malloc(sizeof(t_list));
    head->content = test1;
    
    t_list *second = malloc(sizeof(t_list));
    second->content = test2;
    
    t_list *third = malloc(sizeof(t_list));
    third->content = test3;
    
    head->next = second;
    second->next = third;
    third->next = NULL;

    t_list *current = head;
	ft_lstclear(&current, *test);

    return 0;
}*/