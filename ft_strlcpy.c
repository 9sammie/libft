/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:57:02 by maballet          #+#    #+#             */
/*   Updated: 2024/11/18 19:08:39 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	result;
	size_t	i;

	i = 0;
	result = ft_strlen((char *)src);
	if (size <= 0)
		return (ft_strlen((char *)src));
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (result);
}
/*
int	main(void)
{
	char src1[] = "lorem ipsum dolor sit amet";
	char dest1[] = "gfff";
	char src2[] = "lorem ipsum dolor sit amet";
	char dest2[] = "gfff";
	size_t size = 15;

	printf("function : %zu\nmine : %zu\n", strlcpy(dest2, src2, size),
	ft_strlcpy(dest1, src1, size));
	write(1, "\n", 1);
    write(1, dest1, 15);
	write(1, "\n", 1);
	write(1, dest2, 15);
	return (0);
}
*/