/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:57:02 by maballet          #+#    #+#             */
/*   Updated: 2024/11/14 14:29:14 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	i;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen((char *)src);
	i = 0;
	if(dest_len >= size)
		return (size + src_len);
	while (src[i] != 0 && dest_len + i < size - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}
/*
int	main(void)
{
	char src1[] = "hey";
	char dest1[] = "triforce";
	char src2[] = "hey";
	char dest2[] = "triforce";
	size_t size = 1;

	printf("function : %zu\nmine : %zu\n", strlcat(dest2, src2, size),
		ft_strlcat(dest1, src1, size));
	return (0);
}
*/