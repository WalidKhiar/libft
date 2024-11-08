/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oukhiar <oukhiar@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:46:35 by oukhiar           #+#    #+#             */
/*   Updated: 2024/11/02 18:51:34 by oukhiar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	*ft_memset(void *b, int c, int len)
{
	unsigned char *po;
	int i;

	i = 0;
	po = (unsigned char *)b; 
	while (i < len)
	{
		po[i] = (unsigned char)c;
		i++;
	}
return (b);
}
