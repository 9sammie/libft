/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 16:10:25 by maballet          #+#    #+#             */
/*   Updated: 2024/11/18 19:12:03 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	l;
	size_t	n;

	i = 0;
	l = 0;
	n = ft_strlen((char *)little);
	if (little[i] == 0)
		return ((char *)big);
	while (big[i] && i < len)
	{
		while (big[i + l] == little[l] && l < n && i + l < len)
			l++;
		if (l == n)
			return ((char *)&big[i]);
		else
			l = 0;
		i++;
	}
	return (0);
}
/*
int main()
{
    const char big[] = "bonjoure";
    const char little[] = "bonjoureuh";
    size_t len = 10;

    printf("func: %s\nMine: %s\n", strnstr(big, little, len),
	ft_strnstr(big, little, len));
    return(0);
}
*/