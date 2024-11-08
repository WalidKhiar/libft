/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oukhiar <oukhiar@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 11:30:16 by oukhiar           #+#    #+#             */
/*   Updated: 2024/11/02 18:47:19 by oukhiar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *ft_calloc(size_t count, size_t size)
{
	void *ptr;

	ptr = malloc (count * size);
	if (ptr == NULL)
	return (NULL);
	ft_bzero(ptr, size * count);
	return (ptr);
}
