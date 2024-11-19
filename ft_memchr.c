/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 17:55:35 by maballet          #+#    #+#             */
/*   Updated: 2024/11/19 15:08:25 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == (unsigned char) c)
		{
			return (&str[i]);
		}
		i++;
	}
	return (NULL);
}

// int main()
// {
//     size_t n = 5;
//     int c = 'j';
//     const   char s[] = "bonjour";

//     printf("ori : %p\n", memchr(s, c, n));
//     printf("mine: %p\n", ft_memchr(s, c, n));
//     return(0);
// }