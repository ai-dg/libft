/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagudelo <dagudelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:06:17 by dagudelo          #+#    #+#             */
/*   Updated: 2023/11/17 16:38:34 by dagudelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

// int	main(int ac, char **av)
// {
// 	(void)ac;
// 	char	c;
// 	c = 31;
// 	printf("Original: %d\n", isprint(c));
// 	printf("Copy: %d", ft_isprint(c));
// 	return (0);
// }
