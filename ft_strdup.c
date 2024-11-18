/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 16:42:41 by maballet          #+#    #+#             */
/*   Updated: 2024/11/18 19:07:51 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*dup;

	i = 0;
	dup = malloc(ft_strlen((char *)s));
	if (dup == NULL)
		return (NULL);
	while (i < ft_strlen((char *)s))
	{
		dup[i] = s[i];
		i++;
	}
	return (dup);
}
/*
int main()
{
    const char  s[] = "bonjour";

    printf("true: %s\n", strdup(s));
    printf("mine: %s\n", ft_strdup(s));
    return(0);
}
*/