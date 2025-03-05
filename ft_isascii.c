/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagudelo <dagudelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:28:02 by dagudelo          #+#    #+#             */
/*   Updated: 2023/11/13 17:21:32 by dagudelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

// int	main(int ac, char **av)
// {
// 	(void)ac;
// 	char	c;
// 	c = 127;
// 	printf("Original: %d\n", isascii(c));
// 	printf("Copy: %d", ft_isascii(c));
// 	return (0);
// }
