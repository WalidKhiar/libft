/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oukhiar <oukhiar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:37:21 by oukhiar           #+#    #+#             */
/*   Updated: 2024/11/07 16:48:39 by oukhiar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct s_list
{
    void *content;        
    struct s_list *next; 
} t_list;


void ft_lstdelone(t_list *lst, void (*del)(void*))
{
    if (!lst || !del)
    return ;
    del (lst->content);// free content
    free(lst);
}

void del_content(void *content)
{
    // char *ptr = content;
    free(content);
}

void printlist(t_list *ptr)
{
    if (!ptr)
        return ;
    char* content = ptr->content;
    printf("%s\n", content);
    printlist(ptr->next);
}


int main()
{
    t_list *head = NULL;
    t_list *lastnode = NULL;
    for (int i = 0; i < 5; i++)
    {
        t_list *node = malloc(sizeof(t_list));
        char *walid = "Walid Khiar";
        char *str = malloc(strlen(walid) + 1);
        strcpy(str, walid);

        node->content = str;
        if (!head)
            head = node;
        else
            lastnode->next = node;
        lastnode = node;
    }
    // printf("%u\n", sizeof(struct ss));
    lastnode->next = NULL;
    t_list* tmp = head;
    head = head->next;
    ft_lstdelone(tmp, del_content);
    printlist(head);
    // free

    while (head) {
        t_list* tmp = head;
        head = head->next;
        ft_lstdelone(tmp, del_content);
    }
}
