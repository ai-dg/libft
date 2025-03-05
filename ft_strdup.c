/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagudelo <dagudelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:26:25 by dagudelo          #+#    #+#             */
/*   Updated: 2023/11/15 12:55:34 by dagudelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	size_t	len;
	void	*dest;

	len = ft_strlen(src) + 1;
	dest = malloc(len);
	if (!dest)
		return (NULL);
	return ((char *)ft_memcpy(dest, src, len));
}

// int	main(void)
// {
// 	char	*str;
// 	char	*allocated;

// 	str = "Malloc test";
// 	printf("original : base : $%s$ @ %p\n", str, str);
// 	allocated = strdup(str);
// 	printf("strdup : alloc : $%s$ @ %p\n", allocated, allocated);
// 	allocated = ft_strdup(str);
// 	printf("ft_strdup : alloc : $%s$ @ %p\n", allocated, allocated);
// }
