/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oukhiar <oukhiar@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:50:01 by oukhiar           #+#    #+#             */
/*   Updated: 2024/11/05 18:44:42 by oukhiar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
t_list *ft_lstnew(void *content)
{
     t_list *new_node;
    
    new_node = (t_list *)malloc(sizeof(t_list));
    if(!new_node)
    return (NULL);
    new_node -> content = content;
    new_node -> next = NULL;
    return (new_node); 
}