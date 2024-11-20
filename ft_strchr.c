/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 11:57:50 by maballet          #+#    #+#             */
/*   Updated: 2024/11/19 16:39:31 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}

// int main()
// {
//     int c = 'r';
//     const char s[] = "gsgooivhysil8ygers987gergi7erur";

//     printf("ori : %s\n", strchr(s, c));
//     printf("mine: %s", ft_strchr(s, c));
//     return(0);
// }
