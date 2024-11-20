/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 16:42:39 by maballet          #+#    #+#             */
/*   Updated: 2024/11/20 11:21:40 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	char		*dup;

	i = 0;
	if (ft_strlen(s) <= start)
	{
		len = 0;
	}
	else if (ft_strlen(s) <= len + start)
	{
		len = ft_strlen(s) - start;
	}
	dup = malloc(sizeof(char) * (len + 1));
	if (dup == 0)
	{
		return (NULL);
	}
	while (i < len && start + i < ft_strlen(s))
	{
		dup[i] = s[i + start];
		i++;
	}
	dup[i] = '\0';
	return ((char *)dup);
}

// int	main(void)
// {
// 	printf("%s\n", ft_substr("bonjourno", 20, 10));
// }
