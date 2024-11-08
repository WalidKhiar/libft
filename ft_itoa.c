/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oukhiar <oukhiar@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 12:07:41 by oukhiar           #+#    #+#             */
/*   Updated: 2024/11/02 18:47:19 by oukhiar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_len_integer(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_treatment(char *convert_str, long nbr, int i)
{
	if (nbr == 0)
	{
		convert_str[--i] = (nbr % 10) + 48;
		return (convert_str);
	}
	if (nbr < 0)
	{
		convert_str[0] = '-';
		nbr *= -1;
	}
	while (nbr)
	{
		convert_str[--i] = (nbr % 10) + 48;
		nbr /= 10;
	}
	return (convert_str);
}

char	*ft_itoa(int n)
{
	char	*convert_str;
	int		i;
	long	nbr;

	nbr = n;
	i = count_len_integer(n);
	if (nbr < 0)
		i += 1;
	convert_str = (char *)malloc(sizeof(char) *( i + 1));
	if (!convert_str)
		return (NULL);
	convert_str[i] = '\0';
	return (ft_treatment(convert_str, nbr, i));
}
/*int main(){
		
	int n = 0123;
	//char 	*res = ft_itoa(n);
		printf("%d",n);
}*/
