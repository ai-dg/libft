/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagudelo <dagudelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:17:43 by dagudelo          #+#    #+#             */
/*   Updated: 2023/11/20 10:01:35 by dagudelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*source;
	unsigned char		*destination;
	size_t				i;

	destination = dest;
	source = src;
	i = 0;
	if (!src && !dest)
		return (NULL);
	while (i < n)
	{
		destination[i] = source[i];
		i++;
	}
	return (destination);
}

// int	main(int ac, char **av)
// {
// 	char	dest[7] = "AAAAAA";

// 	(void)ac;
// 	printf("Original: %s\n", memcpy(dest, av[1], 7));
// 	printf("Copy: %s\n", ft_memcpy(dest, av[1], 7));
// 	return (0);
// }
