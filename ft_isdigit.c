/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:54:52 by maballet          #+#    #+#             */
/*   Updated: 2024/11/12 15:57:12 by maballet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <ctype.h>

int    ft_isdigit(int c)
{
    if (c >= '0' && c <= '9')
        return (2048);
    return (0);
}

/*int     main(void)
{
    char    c;

    c = '9';
    printf("orig : %d\nmine : %d", isdigit(c), ft_isdigit(c));
    return (0);
}*/