/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 11:57:50 by maballet          #+#    #+#             */
/*   Updated: 2024/11/18 16:43:03 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
    while(s[i])
    {
        if(s[i] == (char)c)
            return((char *)s + i);
        i++;
    }
    if(c == '\0')
        return((char *)s + i);
    return(NULL);
}
/*
int main()
{
    int c = '\0';
    const char s[] = "gtrd";

    printf("ori : %s\n", strchr(s, c));
    printf("mine: %s", ft_strchr(s, c));
    return(0);
}
*/