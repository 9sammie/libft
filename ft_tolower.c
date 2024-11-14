/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 11:25:40 by maballet          #+#    #+#             */
/*   Updated: 2024/11/12 16:19:31 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <ctype.h>
//#include <stdio.h>

int ft_tolower(int c)
{
    if(c >= 'A' && c <= 'Z')
    {
        c = c + 32;
    }
    return(c);
}
/*
int main()
{
    int c = 'A';

    printf("ori : %d\n", tolower(c));
    printf("mine: %d\n", ft_tolower(c));
    return(0);
}
*/