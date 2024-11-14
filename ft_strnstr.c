/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 16:10:25 by maballet          #+#    #+#             */
/*   Updated: 2024/11/14 18:06:07 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i;
    size_t l;
    char    *large;
    char    *mini;

    large = (char *)big;
    mini = (char *)little;
    i = 0;
    l = 0;
    if(mini[i] == 0)
        return(large);
    while(large[i] && i < len)
    {
        while(large[i + l] == mini[l] && l < ft_strlen(mini))
        {
            l++;
        }
        if(l == ft_strlen(mini))
            return(&large[i]);
        else
            l = 0;
        i++;
    }
    return(0);
}
/*
int main()
{
    const char big[] = "bonjoure";
    const char little[] = "jour";
    size_t len = 9;

    printf("func: %s\nMine: %s\n", strnstr(big, little, len), ft_strnstr(big, little, len));
    return(0);
}
*/