/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagudelo <dagudelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 10:41:59 by dagudelo          #+#    #+#             */
/*   Updated: 2023/11/17 16:39:31 by dagudelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	len_str;
	char	*dest;
	size_t	i;

	if (!s)
		return (NULL);
	len_str = ft_strlen(s);
	if (start >= len_str)
		return (ft_strdup(""));
	if (len + start > len_str)
		len = len_str - start;
	dest = (char *)malloc((len + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	i = 0;
	while (i < len && *(s + i))
	{
		*(dest + i) = *(s + i + start);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
// int	main(void)
// {
// 	char			*chaine;
// 	unsigned int	start;
// 	size_t			len;

// 	chaine = "0123456789abcdefghi";
// 	start = 5;
// 	len = 10;
// 	printf("\033[1;35mSubstraction of chaine is :\033[0m %s", ft_substr(chaine,
// 			start, len));
// }
