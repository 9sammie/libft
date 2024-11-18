/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 13:36:01 by maballet          #+#    #+#             */
/*   Updated: 2024/11/18 18:01:24 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t nmemb, size_t size)
{
    size_t  i;
    void *array;

    i = 0;
    if(size * nmemb / size != nmemb)
        return (NULL);
    array = malloc(size * nmemb);
    if(array == NULL)
        return (NULL);
    ft_bzero(array, size * nmemb);
    return (array);
}
/*
int main()
{
    size_t nmemb;
    size_t size;

    nmemb = 5;
    size = 3;
    printf("true: %p\n", calloc(nmemb, size));
    printf("mine: %p\n", ft_calloc(nmemb, size));
    return(0);
}
*/