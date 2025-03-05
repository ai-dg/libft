/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagudelo <dagudelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:08:18 by dagudelo          #+#    #+#             */
/*   Updated: 2023/11/20 12:35:24 by dagudelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

// int	main(int ac, char **av)
// {
// 	(void)ac;
// 	printf("Original: %ld\n", strlen(av[1]));
// 	printf("Copy: %ld", ft_strlen(av[1]));
// 	return (0);
// }
