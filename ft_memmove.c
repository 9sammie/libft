/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 10:12:29 by maballet          #+#    #+#             */
/*   Updated: 2024/11/15 12:45:44 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t i;
    unsigned char *s;
    unsigned char *d;

    i = 0;
    s = (unsigned char *)src;
    d = (unsigned char *)dest;
//    if(d[i] == '\0' || s[i] == '\0')
//        return(0);
    while(i < n)
    {
        if(d > s)
            d[i] = s[i];
        else
            d[n - (i + 1)] = s[n - (i + 1)];
        i++;
    }
    return(dest);
}
    /*    long version :

    if(d > s)
    {
        while(i < n)
        {
            d[i] = s[i]; // alt version : *(unsigned char *) (s + i)
            i++;
        }
    }
    else
    n--;
    {
        while(i < n)
        {
            d[n] = s[n];
            n--;
        }
        d[n] = s[n];
    }
    return(dest);
}*/

int main()
{
    char str1[] = "hello world";
    char str2[] = "hello world";
    char destm[] = "";
    char desto[] = "";
    size_t n = 6;

    printf("src     : %s\n", str1);
    ft_memmove(destm, str1, n);
    printf("mine    : %s\n", destm);
    memmove(desto, str2, n);
    printf("func    : %s\n", desto);
    return(0);
}
