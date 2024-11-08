/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oukhiar <oukhiar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 18:56:36 by oukhiar           #+#    #+#             */
/*   Updated: 2024/11/07 19:17:29 by oukhiar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list* tmp = NULL;
    while (*lst)
    {
        tmp = *lst;
        *lst = (*lst)->next;
        ft_lstdelone_bonus(tmp, del);
    }
    *lst = NULL;
}