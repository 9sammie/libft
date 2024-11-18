/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 17:55:35 by maballet          #+#    #+#             */
/*   Updated: 2024/11/18 17:49:14 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t  i;
    unsigned char   *str;

    i = 0;
    str = (unsigned char *)s;
    if(n == 0 || c == '\0' || str[i] == '\0')
        return(NULL);
    while(str[i] != (unsigned char)c && str[i] && i < n)
        i++;
    if(str[i] == (unsigned char)c)
        return((char *)s + i);
    else
    return((void *)s);
}
/*
int main()
{
    size_t n = 5;
    int c = 'a';
    const   char s[] = "";

    printf("ori : %p\n", memchr(s, c, n));
    printf("mine: %p\n", ft_memchr(s, c, n));
    return(0);
}
*/