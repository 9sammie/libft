/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 10:12:29 by maballet          #+#    #+#             */
/*   Updated: 2024/11/19 13:57:47 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*s;
	unsigned char		*d;

	i = 0;
	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	if (!d && !s)
		return (NULL);
	while (i < n)
	{
		if (d > s)
			d[n - (i + 1)] = s[n - (i + 1)];
		else
			d[i] = s[i];
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char	str1[] = "123";
// 	char	str2[] = "123";
// 	char	destm[] = "abcd";
// 	char	desto[] = "abcd";
// 	size_t	n = 15;

// 	printf("src     : %s\n", str1);
// 	ft_memmove(destm, str1, n);
// 	printf("mine    : %s\n", destm);
// 	memmove(desto, str2, n);
// 	printf("func    : %s\n", desto);
// 	return (0);
// }