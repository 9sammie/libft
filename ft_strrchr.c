/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 11:57:50 by maballet          #+#    #+#             */
/*   Updated: 2024/11/12 15:55:34 by maballet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

char    *ft_strrchr(const char *s, int c)
{
    int lenth;

    lenth = 0;
    while(s[lenth])
        lenth++;
    while(s[lenth] != (unsigned char)c)
        lenth--;
    if(s[lenth] == (unsigned char)c)
        return((char *)s + lenth);
    else
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