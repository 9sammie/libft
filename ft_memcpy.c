/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 10:12:29 by maballet          #+#    #+#             */
/*   Updated: 2024/11/19 13:06:44 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	*d;

	i = 0;
	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
//if(d[i] == 0 || s[i] == 0)
//	return(0);
/*
int main()
{
    char str1[] = "";
    char str2[] = "";
    char destm[] = "";
    char desto[] = "";
    size_t n = 6;

    printf("src     : %s\n", str1);
    ft_memcpy(destm, str1, n);
    printf("mine    : %s\n", destm);
    memcpy(desto, str2, n);
    printf("func    : %s\n", desto);
    return(0);
}
*/