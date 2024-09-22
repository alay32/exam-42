/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejd <ael-mejd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 16:38:58 by ael-mejd          #+#    #+#             */
/*   Updated: 2024/08/22 17:03:53 by ael-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

// int	ft_list_size(t_list *begin_list)
// {
//     if (begin_list == 0)
//         return (0);
//     int count = 0;
//     while (begin_list != 0)
//     {
//         begin_list = begin_list->next;
//         count++;
//     }
//     return (count);
// }

int	ft_list_size(t_list *begin_list)
{
	if (begin_list == 0)
		return (0);
	else
		return (1 + ft_list_size(begin_list->next));
}

t_list *create_node(void *data)
{
    t_list *new_node = (t_list *)malloc(sizeof(t_list));
    if (!new_node)
        return NULL;
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

int main(void)
{
    t_list *node1 = create_node("hola");
    t_list *node2 = create_node("Mondoo");
    t_list *node3 = create_node("Que tal");

    node1->next = node2;
    node2->next = node3;

    printf("List size: %d\n", ft_list_size(node1)); // Should return 3

    printf("Empty list size: %d\n", ft_list_size(NULL)); // Should return 0

    printf("Single-node list size: %d\n", ft_list_size(node3)); // Should return 1

    free(node1);
    free(node2);
    free(node3);

    return 0;
}
