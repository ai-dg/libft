/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagudelo <dagudelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:14:38 by dagudelo          #+#    #+#             */
/*   Updated: 2023/11/15 12:43:09 by dagudelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	size;

	size = ft_strlen(s);
	while (size >= 0)
	{
		if (c % 256 == *(s + size))
			return ((char *)s + size);
		else if (c == '\0')
			return ((char *)s);
		size--;
	}
	return (0);
}

// int	main(int ac, char **av)
// {
// 	int		i;
// 	char	*str;
// 	char	*str1;

// 	(void)ac;
// 	str = strrchr(av[1], 'a');
// 	str1 = ft_strrchr(av[1], 'a');
// 	printf("\033[1;35mstrrchr : \033[0m %s\n", str);
// 	printf("\033[1;34mft_strrchr : \033[0m %s\n", str1);
// }
