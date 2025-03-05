/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagudelo <dagudelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:08:16 by dagudelo          #+#    #+#             */
/*   Updated: 2023/11/20 12:36:21 by dagudelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c -= 32;
	}
	return (c);
}

// int	main(int ac, char **av)
// {
// 	int		i;
// 	char	*str;

// 	i = 0;
// 	(void)ac;
// 	printf("\033[1;35mOriginal : \033[0m %s\n", av[1]);
// 	printf("\033[1;34mToupper : \033[0m");
// 	while (av[1][i] != '\0')
// 	{
// 		printf("\033[1;34m%c\033[0m", ft_toupper(av[1][i]));
// 		i++;
// 	}
// }
