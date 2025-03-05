/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagudelo <dagudelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 18:25:01 by dagudelo          #+#    #+#             */
/*   Updated: 2023/11/21 12:58:48 by dagudelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	x;
	size_t	y;
	size_t	len_little;

	len_little = ft_strlen(little);
	x = 0;
	if (*little == 0)
		return ((char *)big);
	if (big == little)
		return ((char *)big);
	if (len == 0)
		return (NULL);
	while (big[x] && x < len)
	{
		y = 0;
		while (y + x < len && big[x + y] == little[y] && little[y])
			y++;
		if (y == len_little)
			return ((char *)&big[x]);
		x++;
	}
	return (NULL);
}

// int	main(int ac, char **av)
// {
// 	const char	*largestring = "Foo Bar Baz";
// 	const char	*smallstring = "Bar";
// 	char		*ptr;
// 	char		*ptr1;

// 	ptr = strnstr(largestring, smallstring, 20);
// 	ptr1 = ft_strnstr(largestring, smallstring, 20);
// 	(void)ac;
// 	(void)av;
// 	printf("Original: %s\n", ptr);
// 	printf("Copy: %s\n", ptr1);
// 	return (0);
// }
