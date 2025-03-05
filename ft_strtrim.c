/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagudelo <dagudelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:21:30 by dagudelo          #+#    #+#             */
/*   Updated: 2023/11/20 15:49:19 by dagudelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_set(char const c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

static size_t	ft_start(char const *s1, char const *set)
{
	size_t	i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (ft_set(s1[i], set) == 0)
			return (i);
		i++;
	}
	return (i);
}

static size_t	ft_end(char const *s1, char const *set, size_t len_s1)
{
	while (len_s1 > 0)
	{
		len_s1--;
		if (ft_set(s1[len_s1], set) == 0)
			return (len_s1 + 1);
	}
	return (len_s1 + 1);
}

static void	ft_vivalavida(char *dest, const char *s1, size_t i, size_t len_s1)
{
	size_t	x;

	x = 0;
	while (i < len_s1)
	{
		dest[x] = s1[i];
		x++;
		i++;
	}
	dest[x] = '\0';
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dest;
	size_t	len_s1;
	size_t	i;

	if (!s1)
		return (NULL);
	if (!set)
		return (NULL);
	len_s1 = ft_strlen(s1);
	i = ft_start(s1, set);
	if (i != len_s1)
		len_s1 = ft_end(s1, set, len_s1);
	dest = (char *)malloc(sizeof(char) * (len_s1 - i) + 1);
	if (dest != NULL)
		ft_vivalavida(dest, s1, i, len_s1);
	return (dest);
}

// int main(void)
// {
// 	printf("Resultat : %s", ft_strtrim(" xxxxtripouille  ", "tripouille "));

// }
