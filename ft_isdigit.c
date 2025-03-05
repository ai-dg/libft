/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagudelo <dagudelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:08:07 by dagudelo          #+#    #+#             */
/*   Updated: 2023/11/13 13:38:28 by dagudelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

// int	main(int ac, char **av)
// {
// 	char	c;

// 	(void)ac;
// 	c = '1';
// 	printf("Original: %d\n", isdigit(c));
// 	printf("Copy: %d", ft_isdigit(c));
// 	return (0);
// }
