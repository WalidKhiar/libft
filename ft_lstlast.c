/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oukhiar <oukhiar@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 11:10:23 by oukhiar           #+#    #+#             */
/*   Updated: 2024/11/07 12:43:27 by oukhiar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
t_list *ft_lstlast(t_list *lst)
{
    t_list *tmp;

    tmp = lst;
    while (tmp -> next != NULL)
    {
        tmp = tmp -> next;
    }
    return (tmp);
}


int main() {
    // t_list *head = malloc(sizeof(t_list));
    // t_list *node1 = malloc(sizeof(t_list));
    // t_list *lastnode = malloc(sizeof(t_list));

    // (*head).next = node1;
    // node1->next = lastnode;
    // lastnode->next = NULL;

    int arr[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};

    t_list *head = NULL;
    t_list *lastnode = NULL;
    for (int i = 0; i < 15; i++) {
        // t_list *node = malloc(sizeof(t_list));
        // node->content = arr + i;
        t_list *node = ft_lstnew(arr + i);
        if (!head)
            head = node;
        else
            lastnode->next = node;
        lastnode = node;
        lastnode->next = NULL;
    }


    ft_lstlast(head);
    // t_list *tmp = head;
    // while (tmp) {
    //     printf("%d ", *((int *)tmp->content));
    //     tmp = tmp->next;
    // }
}