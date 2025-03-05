/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagudelo <dagudelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:40:01 by dagudelo          #+#    #+#             */
/*   Updated: 2023/11/20 12:33:18 by dagudelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int		i;
	int		signe;
	long	temp;

	i = 0;
	signe = 1;
	temp = 0;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	while (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			signe = -1;
		else if (nptr[i] == '+')
			signe = 1;
		if (nptr[i + 1] == '+' || nptr[i + 1] == '-')
			return (0);
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		temp = temp + (nptr[i++] - '0');
		temp *= 10;
	}
	return ((temp *= signe) / 10);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	(void)ac;
	printf("Original : %d\n", atoi(av[1]));
	printf("Copy : %d", ft_atoi(av[1]));
}
*/
