/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 13:36:01 by maballet          #+#    #+#             */
/*   Updated: 2024/11/15 16:37:23 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t nmemb, size_t size)
{
    size_t  i;
    void *array;

    i = 0;
    if(nmemb * size == 0 || size * nmemb / size != nmemb)
        return (0);
    array = malloc(size * nmemb);
    if(array == NULL)
        return (0);
    ft_bzero(array, size);
    return (array);
}
/*
int main()
{
    size_t nmemb;
    size_t size;

    nmemb = 6;
    size = 0;
    printf("true: %p\n", calloc(nmemb, size));
    printf("mine: %p\n", ft_calloc(nmemb, size));
    return(0);
}
*/