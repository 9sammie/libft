/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 11:57:50 by maballet          #+#    #+#             */
/*   Updated: 2024/11/18 18:11:40 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    int lenth;

    lenth = 0;
    while(s[lenth])
        lenth++;
    while(lenth >= 0)
    {
        if(s[lenth] == (char)c)
            return((char *)s + lenth);
        lenth--;
    }
    return(NULL);
}
/*
int main()
{
    int c = 'A';
    const char s[] = "Arcane\0";

    printf("ori : %s\n", strrchr(s, c));
    printf("mine: %s", ft_strrchr(s, c));
    return(0);
}
*/