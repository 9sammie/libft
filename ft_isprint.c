/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:54:52 by maballet          #+#    #+#             */
/*   Updated: 2024/11/12 15:59:43 by maballet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <ctype.h>

int    ft_isprint(int c)
{
    if (c >= 32 && c <= 126)
        return (16384);
    return (0);
}

/*int     main(void)
{
    char    c;

    c = 126;
    printf("orig : %d\nmine : %d", isprint(c), ft_isprint(c));
    return (0);
}*/