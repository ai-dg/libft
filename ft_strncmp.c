/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagudelo <dagudelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:07:51 by dagudelo          #+#    #+#             */
/*   Updated: 2023/11/20 10:10:37 by dagudelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*s11;
	unsigned char	*s22;

	s11 = (unsigned char *)s1;
	s22 = (unsigned char *)s2;
	if (n <= 0)
		return (0);
	i = 0;
	while (s11[i] && s22[i] && s11[i] == s22[i] && i < n - 1)
	{
		i++;
	}
	return (s11[i] - s22[i]);
}

// int main()
// {
//     char s1[] = "Hello";
//     char s2[] = "";
//     char s3[] = "Hello";
//     int n = 5;
//     int result1 = ft_strncmp(s1, s2, n);
//     int result2 = ft_strncmp(s1, s3, n);

//     printf("Result 1 : %d\n", result1);
//     printf("Result 2 : %d\n", result2);
//     printf("\n%d\n", strncmp(s1, s2, n));
//     printf("%d", strncmp(s1, s3, n));
//     return (0);
// }
