/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagudelo <dagudelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:16:43 by dagudelo          #+#    #+#             */
/*   Updated: 2023/11/20 12:34:31 by dagudelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (!dest && !src && n)
		return (NULL);
	if (dest < src)
		return (ft_memcpy(dest, src, n));
	else
	{
		dest += n;
		src += n;
		while (n--)
		{
			ft_memset(--dest, *(char *)(--src), sizeof(char));
		}
	}
	return (dest);
}

// int	main(int ac, char **av)
// {
// 	char	dest[7] = "AAAAAA";

// 	(void)ac;
// 	printf("Original: %s\n", memmove(dest, av[1], 4));
// 	printf("Copy: %s\n", ft_memmove(dest, av[1], 4));
// 	return (0);
// }
