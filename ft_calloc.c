/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagudelo <dagudelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:50:43 by dagudelo          #+#    #+#             */
/*   Updated: 2023/11/15 14:03:47 by dagudelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb > 0 && INT_MAX / nmemb < size)
		return (NULL);
	if (size > 0 && INT_MAX / size < nmemb)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, '\0', size * nmemb);
	return (ptr);
}

// #include <stdlib.h>
// #include <unistd.h>

// int		main(int argc, const char *argv[])
// {
// 	char	*str;

// 	alarm(5);
// 	if (argc == 1)
// 		return (0);
// 	else if (atoi(argv[1]) == 1)
// 	{
// 		str = (char *)ft_calloc(30, 1);
// 		if (!str)
// 			write(1, "NULL", 4);
// 		else
// 			write(1, str, 30);
// 	}
// 	return (0);
// }
