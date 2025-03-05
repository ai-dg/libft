/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagudelo <dagudelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:43:00 by dagudelo          #+#    #+#             */
/*   Updated: 2023/11/21 13:05:02 by dagudelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_strings(const char *str, char c)
{
	size_t	nbr_mots;

	nbr_mots = 0;
	while (*str != '\0')
	{
		if (*str != c)
		{
			while (*str != '\0' && *str != c)
				str++;
			nbr_mots++;
		}
		else
		{
			str++;
		}
	}
	return (nbr_mots);
}

static const char	*ft_replace(char **dest, const char *src, char c)
{
	size_t	len;
	size_t	i;

	while (*src == c)
		src++;
	len = 0;
	while (src[len] != '\0' && src[len] != c)
		len++;
	*dest = (char *)malloc(sizeof(char) * (len + 1));
	i = 0;
	while (i < len)
	{
		(*dest)[i] = src[i];
		i++;
	}
	(*dest)[i] = '\0';
	src += len + 1;
	return (src);
}

char	**ft_split(const char *s, char c)
{
	char	**dest;
	size_t	nbr_mots;
	size_t	i;

	if (!s)
		return (NULL);
	nbr_mots = count_strings(s, c);
	dest = (char **)malloc(sizeof(char *) * (nbr_mots + 1));
	if (dest != NULL)
	{
		dest[nbr_mots] = NULL;
		i = 0;
		while (i < nbr_mots)
		{
			s = ft_replace(dest + i, s, c);
			if (s == NULL)
			{
				free(*dest);
				return (0);
			}
			i++;
		}
	}
	return (dest);
}
