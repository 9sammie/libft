/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 14:55:27 by maballet          #+#    #+#             */
/*   Updated: 2024/11/18 18:58:11 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && str1[i] == str2[i])
	{
		i++;
	}
	return (str1[i] - str2[i]);
}
/*
int main()
{
    const void *s1 = "Arcane";
    const void *s2 = "Arcane";
    size_t n = 6;

    printf("func: %d\nMine: %d\n", memcmp(s1, s2, n), ft_memcmp(s1, s2, n));
    return(0);
}
*/