/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagudelo <dagudelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:28:58 by dagudelo          #+#    #+#             */
/*   Updated: 2023/11/15 11:40:12 by dagudelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*temp;

	temp = s;
	i = 0;
	while (i < n)
	{
		*temp = (unsigned char)c;
		temp++;
		i++;
	}
	return (s);
}

// int	main(int ac, char **av)
// {
// 	(void)ac;
// 	printf("Original: %s\n", memset(av[1], 65, 5));
// 	printf("Copy: %s", ft_memset(av[1], 65, 5));
// 	return (0);
// }
