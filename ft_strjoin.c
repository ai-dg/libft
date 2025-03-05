/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagudelo <dagudelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:02:55 by dagudelo          #+#    #+#             */
/*   Updated: 2023/11/20 15:32:51 by dagudelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	size_t	i;

	if (!s1 || !s2 || (!s1 && !s2))
		return (NULL);
	dest = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	i = 0;
	if (dest)
	{
		while (*s1 != '\0')
		{
			dest[i] = *s1;
			s1++;
			i++;
		}
		while (*s2 != '\0')
		{
			dest[i] = *s2;
			i++;
			s2++;
		}
		dest[i] = '\0';
	}
	return (dest);
}

// int	main(void)
// {
// 	const char	*s1;
// 	const char	*s2;

// 	s1 = "Oh my ";
// 	s2 = "GOSH !";
// 	printf("\033[1;34mStrjoin :\033[0m %s", ft_strjoin(s1, s2));
// }
