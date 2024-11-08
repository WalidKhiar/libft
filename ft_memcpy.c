/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oukhiar <oukhiar@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 12:58:36 by oukhiar           #+#    #+#             */
/*   Updated: 2024/11/02 18:55:38 by oukhiar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *ft_memcpy(void *dest, const void *src, size_t n)
{
	char *dest_ptr;
	char *src_ptr;

	dest_ptr = (char *)dest;
	src_ptr = (char *)src;
	if (dest == 0)
		return (0);
	while (n)
	{
		*dest_ptr++ = *src_ptr++;
		n--;
	}
	return (dest);
}
