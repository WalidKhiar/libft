/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oukhiar <oukhiar@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 18:51:09 by oukhiar           #+#    #+#             */
/*   Updated: 2024/11/06 17:59:04 by oukhiar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int i = 0;
    while (lst != NULL)
    {
        i++;
        lst = lst -> next;
    }
    return (i);
}

void printlist(t_list *head) {
    if (!head)
        return ;
    printlist(head->next);
    printf("%d ", *((int *)head->content));
}

int main() {
    // t_list *head = malloc(sizeof(t_list));
    // t_list *node1 = malloc(sizeof(t_list));
    // t_list *lastnode = malloc(sizeof(t_list));

    // (*head).next = node1;
    // node1->next = lastnode;
    // lastnode->next = NULL;

    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    t_list *head = NULL;
    t_list *lastnode = NULL;
    for (int i = 0; i < 10; i++) {
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

    // t_list *tmp = head;
    // while (tmp) {
    //     printf("%d ", *((int *)tmp->content));
    //     tmp = tmp->next;
    // }

    printlist(head);
    printf("\n");

    printf("\nlist size: %d\n", ft_lstsize(head));
}