/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagudelo <dagudelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:15:14 by dagudelo          #+#    #+#             */
/*   Updated: 2023/11/13 15:57:45 by dagudelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	int		i;

	i = 0;
	str = (char *)s;
	if (c == 0)
		return (str + ft_strlen(s));
	while (*(str + i))
	{
		if (c % 256 == *(str + i))
			return (str + i);
		i++;
	}
	return (NULL);
}

// int	main(int ac, char **av)
// {
// 	int		i;
// 	char	*str;
// 	char	*str1;

// 	(void)ac;
// 	str = strchr(av[1], 'a');
// 	str1 = ft_strchr(av[1], 'a');
// 	printf("\033[1;35mstrchr : \033[0m %s\n", str);
// 	printf("\033[1;34mft_strchr : \033[0m %s\n", str1);
// }
