/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagudelo <dagudelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:55:46 by dagudelo          #+#    #+#             */
/*   Updated: 2023/11/13 17:22:24 by dagudelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (!size)
		return (ft_strlen(src));
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

// int	main(int ac, char **av)
// {
// 	(void)ac;
// 	char dest[20] = "Hello";
// 	strlcpy(dest, av[1], 4);
// 	printf("\033[1;35mDestination : \033[0m %s\n", dest);
// 	printf("\033[1;34mSource : \033[0m %s", av[1]);
// }
