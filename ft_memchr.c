/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagudelo <dagudelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:12:57 by dagudelo          #+#    #+#             */
/*   Updated: 2023/11/17 13:24:20 by dagudelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*src;
	unsigned char	ch;
	size_t			i;

	i = 0;
	src = ((unsigned char *)s);
	ch = ((unsigned char)c);
	while (i < n)
	{
		if (*(src + i) == ch)
			return (src + i);
		i++;
	}
	return (0);
}

// int	main(int ac, char **av)
// {
// 	(void)ac;
// 	printf("Original: %s\n", memchr(av[1], 65, 5));
// 	printf("Copy: %s", ft_memchr(av[1], 65, 5));
// 	return (0);
// }
