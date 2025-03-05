/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagudelo <dagudelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 18:24:43 by dagudelo          #+#    #+#             */
/*   Updated: 2023/11/15 11:56:14 by dagudelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*str;

	str = ((char *)s);
	i = 0;
	while (n)
	{
		str[i] = 0;
		i++;
		n--;
	}
}

// int	main(void)
// {
// 	char	str[9] = "123456789";

// 	bzero(str, 2);
// 	printf("\033[1;35mSize = \033[0m %zu\n", sizeof(str));
// 	printf("\033[1;34mTexte = \033[0m  %s\n", str);
// }
