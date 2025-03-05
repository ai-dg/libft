/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagudelo <dagudelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:25:06 by dagudelo          #+#    #+#             */
/*   Updated: 2023/11/13 17:21:24 by dagudelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	char	a;
	char	b;
	char	d;

	a = (c >= 48 && c <= 57);
	b = (c >= 65 && c <= 90);
	d = (c >= 97 && c <= 122);
	return (a || b || d);
}

// int	main(int ac, char **av)
// {
// 	(void)ac;
// 	char	c;
// 	c = '*';
// 	printf("Original: %d\n", isalnum(c));
// 	printf("Copy: %d", ft_isalnum(c));
// 	return (0);
// }
