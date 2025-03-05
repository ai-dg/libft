/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagudelo <dagudelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:52:59 by dagudelo          #+#    #+#             */
/*   Updated: 2023/11/13 13:37:54 by dagudelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

// int	main(int ac, char **av)
// {
// 	char	c;

// 	(void)ac;
// 	c = 'A';
// 	printf("Original: %d\n", isalpha(c));
// 	printf("Copy: %d", ft_isalpha(c));
// 	return (0);
// }
