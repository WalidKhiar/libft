/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonu.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oukhiar <oukhiar@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 12:48:13 by oukhiar           #+#    #+#             */
/*   Updated: 2024/11/07 13:41:57 by oukhiar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *last;

    if  (!*lst)
        *lst = new;
    last = *lst;
    while (last->next != NULL)
    {
        last = last->next;
    }
    last->next = new;
}

int  main()
{
    int arr[] = {1, 2, 3, 4, 5};
    t_list *head = NULL;
    t_list *lastnode =  NULL;
    for(int i = 0; i < 5; i++)
    {
        t_list *node = ft_lstnew(&arr[i]);
        if (!head)
        head = node;
        else
            lastnode->next = node;
        lastnode = node;
    }
    lastnode->next = NULL;
    int a = 6;
   t_list *new = ft_lstnew(&a);
    ft_lstadd_back(&head, new);
    t_list *tmp = head;
   while (tmp != NULL)
    {
        printf("%d\n", *((int *)tmp->content));
        tmp = tmp->next;
    }

    return (0);
}