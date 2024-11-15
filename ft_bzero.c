/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 10:12:29 by maballet          #+#    #+#             */
/*   Updated: 2024/11/15 16:29:14 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

void    ft_bzero(void *s, size_t n)
{
    size_t i;

    i = 0;
    while (i < n)
    {
        *(unsigned char *) (s + i) = '\0';
        i++;
    }
}
/*
int main()
{
    char str[] = "hello world";
    char ori[] = "hello world";

    printf("before  : %s\n", str);
    ft_bzero(str, 6);
    printf("mine    : %s\n", str);
    bzero(ori, 6);
    printf("orig    : %s\n", ori);
    return(0);
}
*/