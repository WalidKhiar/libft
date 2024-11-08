/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oukhiar <oukhiar@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 18:27:31 by oukhiar           #+#    #+#             */
/*   Updated: 2024/11/02 18:54:35 by oukhiar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strrchr(const char *s, int c)
{
	size_t len_s;

	len_s = ft_strlen(s);
	s += len_s;
	while (*s >= 0)
	{
		if (*s == (char)c)
			return ((char *)s);
		s--;
	}
	if (c == '\0')
		return ((char *)s);
	return (0);
}
