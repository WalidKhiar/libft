/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oukhiar <oukhiar@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 18:08:22 by oukhiar           #+#    #+#             */
/*   Updated: 2024/11/06 22:24:34 by oukhiar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main()
{
    int arr[15]; {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    t_list *head = NULL;
     t_list *lastnode;
    for (int i = 0; i < 10; i++)
    {
        size_t *node = malloc(sizeof(t_list));
        if (!node)
        return (1);
        node->content = &arr[i];
        if (!head)
        head = node;
        else
            lastnode->next = node;  
    }
    
}