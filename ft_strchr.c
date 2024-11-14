/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 11:57:50 by maballet          #+#    #+#             */
/*   Updated: 2024/11/12 15:55:31 by maballet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

char    *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
    if(s[i] == 0)
        return(NULL);
    while(s[i] != (unsigned char)c)
        i++;
    if(s[i] == (unsigned char)c)
        return((char *)s + i);
    else
    return(NULL);
}
/*
int main()
{
    int c = 'a';
    const char s[] = "\0br0duaht";

    printf("ori : %s\n", strchr(s, c));
    printf("mine: %s", ft_strchr(s, c));
    return(0);
}
*/