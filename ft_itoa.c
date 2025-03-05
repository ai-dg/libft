/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagudelo <dagudelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:41:20 by dagudelo          #+#    #+#             */
/*   Updated: 2023/11/20 16:31:34 by dagudelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	len_nbr(int n)
{
	size_t	len;

	len = 0;
	if (n == -2147483648)
		n++;
	if (n <= 0)
	{
		n *= -1;
		len++;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*str;
	unsigned int	nbr;
	size_t			len_total;

	len_total = len_nbr(n);
	if (n < 0)
		nbr = (unsigned)(n * -1);
	else
		nbr = (unsigned)n;
	str = (char *)malloc(sizeof(char) * (len_total + 1));
	if (str != NULL)
	{
		str[len_total--] = '\0';
		if (n < 0)
			str[0] = '-';
		else if (n == 0)
			str[0] = '0';
		while (nbr > 0)
		{
			str[len_total--] = (char)(nbr % 10 + '0');
			nbr /= 10;
		}
	}
	return (str);
}
