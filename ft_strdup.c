/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 16:42:41 by maballet          #+#    #+#             */
/*   Updated: 2024/11/19 11:32:28 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*dup;

	i = 0;
	dup = malloc(ft_strlen((char *)s) + 1);
	if (dup == NULL)
		return (NULL);
	while (i < ft_strlen((char *)s))
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
/*
int main()
{
    const char  s[] = "lorem ipsum dolor sit amet";

    printf("true: %s\n", strdup(s));
    printf("mine: %s\n", ft_strdup(s));
    return(0);
}
*/