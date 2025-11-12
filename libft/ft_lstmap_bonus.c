/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 10:28:40 by hliu              #+#    #+#             */
/*   Updated: 2025/11/12 11:06:57 by hliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*new_node;

	if (!lst || !f || !del)
		return (NULL);
	result = NULL;
	while (lst != NULL)
	{
		new_node = ft_lstnew(f(lst -> content));
		if (!new_node)
		{
			ft_lstclear(&result, del);
			return (NULL);
		}
		ft_lstadd_back(&result, new_node);
		lst = lst -> next;
	}
	return (result);
}

/*#include <stdio.h>

void *map_func(void *content) {
    int *new_content = malloc(sizeof(int));
    if (!new_content) return NULL;
    *new_content = (*(int*)content) * 2;
    return new_content;
}
void del_content(void *content) {
    free(content);
}
int main() {
    t_list *lst = NULL;

    // Créer une liste avec 3 éléments
    for (int i = 0; i < 3; i++) {
        int *content = malloc(sizeof(int));
        if (!content) return 1;
        *content = i;

        t_list *new_node = ft_lstnew(content);
        if (!new_node) {
            free(content);
            return 1;
        }
        ft_lstadd_front(&lst, new_node);
    }

    // Mapper la liste
    t_list *mapped = ft_lstmap(lst, map_func, del_content);

    // Nettoyer les deux listes
    ft_lstclear(&lst, del_content);
    if (mapped) ft_lstclear(&mapped, del_content);

    return 0;
}*/
