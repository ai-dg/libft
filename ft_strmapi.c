/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagudelo <dagudelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:43:23 by dagudelo          #+#    #+#             */
/*   Updated: 2023/11/20 16:18:46 by dagudelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*dest;
	size_t	i;

	if (!s)
		return (NULL);
	if (!f)
		return (NULL);
	dest = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (dest != NULL)
	{
		i = 0;
		while (s[i])
		{
			dest[i] = (*f)(i, s[i]);
			i++;
		}
		dest[i] = 0;
	}
	return (dest);
}
