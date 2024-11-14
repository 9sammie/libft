/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:38:40 by maballet          #+#    #+#             */
/*   Updated: 2024/11/14 14:54:59 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;
    size_t lenth;

    i = 0;
    lenth = 0;
    while(s1[lenth])
        lenth++;
    while(i < n && i <= lenth)
    {
        if(s1[i] != s2[i])
            return(s1[i] - s2[i]);
        i++;
    }
    return(0);
}

/*int main()
{
    const char  str1[] = "hello";
    const char  str2[] = "hello world";

    printf("ori : %d\n", strncmp(str1, str2, 7));
    printf("mine: %d\n", ft_strncmp(str1, str2, 7));
    return(0);
}
*/