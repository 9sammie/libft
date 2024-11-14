/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:57:02 by maballet          #+#    #+#             */
/*   Updated: 2024/11/14 13:14:06 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if(size <= 0)
		return(ft_strlen((char *)src));
	while (src[i] && i < size - 1 && dest[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen((char *)src));
}
/*
int	main(void)
{
	char src1[] = "gtyt";
	char dest1[] = "gfff";
	char src2[] = "gtyt";
	char dest2[] = "gfff";
	size_t size = 7;

	printf("function : %zu\nmine : %zu\n", strlcpy(dest2, src2, size), ft_strlcpy(dest1, src1, size));
	return (0);
}
*/