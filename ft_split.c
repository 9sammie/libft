/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:54:31 by maballet          #+#    #+#             */
/*   Updated: 2024/11/20 17:55:01 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static ft_countword(char const *, char c);

char	**ft_split(char const *s, char c)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	**array;
	
	start = 0;
	end = 0;
	i = 0;
	array = malloc(sizeof(char) * ft_countword(s, c));
	while (s[i])
	{
		end = i;
		start = i;
		while (s[i] == c)
		{
			i++;
			start++;
		}
		if (s[i] == '\0')
			return (array);
		while (s[i] != c && s[i] != '\0')
		{
			i++;
			end++;
		}
		ft_substr(s, start, (end - start + 1));
	}
	return (array);
}

static size_t	ft_countword(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			return (count);
		while (s[i] != c && s[i] != '\0')
			i++;
		count++;
	}
	return (count);
}

int main(void)
{
	printf("%zu", ft_ft_split("hgt,hey,,,bonjour,,,,,salut", ','));
	return (0);
}