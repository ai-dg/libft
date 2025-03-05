/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagudelo <dagudelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:40:48 by dagudelo          #+#    #+#             */
/*   Updated: 2023/11/17 12:19:22 by dagudelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	total_len;
	size_t	i;
	size_t	j;

	total_len = ft_strlen(src);
	if (size)
	{
		dest_len = ft_strlen(dst);
		size -= 1;
		i = dest_len;
		j = 0;
		while (i < size && *(src + j))
			*(dst + i++) = *(src + j++);
		if (size + 1 > dest_len)
		{
			*(dst + i) = '\0';
			total_len += dest_len;
		}
		else
			total_len += size + 1;
	}
	return (total_len);
}

// int	main(int ac, char **av)
// {
// 	char dest[20] = "Hello";
// 	char src[] = "world";
// 	(void)ac;
// 	printf("\033[1;50mSize : \033[0m %lu\n", sizeof(dest));
// 	ft_strlcat(dest, src, 50);
// 	printf("\033[1;35mDestination : \033[0m %s\n", dest);
// 	printf("\033[1;34mSource : \033[0m %s", av[1]);
// }
