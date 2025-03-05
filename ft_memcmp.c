/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagudelo <dagudelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:10:09 by dagudelo          #+#    #+#             */
/*   Updated: 2023/11/15 16:26:35 by dagudelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*src1;
	unsigned char	*src2;

	src1 = (unsigned char *)s1;
	src2 = (unsigned char *)s2;
	while (n > 0)
	{
		if (*src1 != *src2)
			return ((int)(*src1 - *src2));
		n--;
		src1++;
		src2++;
	}
	return (0);
}

// int	main(int ac, char **av)
// {
// 	char	*texte0;
// 	char	*texte1;

// 	(void)ac;
// 	texte0 = "Hello";
// 	texte1 = "Hella Hello Motherfcker !";
// 	printf("\033[1;34mOriginal result : \033[0m %d \n", memcmp(texte0, texte1,
// 			20));
// 	printf("\033[1;35mCopy result : \033[0m %d", ft_memcmp(texte0, texte1, 20));
// }
