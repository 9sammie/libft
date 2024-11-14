/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 16:10:25 by maballet          #+#    #+#             */
/*   Updated: 2024/11/14 17:15:22 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *strnstr(const char *big, const char *little, size_t len)
{
    size_t i;
    size_t l;

    i = 0;
    l = 0;
    if(little[i] == 0)
        return(big[i]);
    while(big[i] && i < len)
    {
        if(big[i] == little[i])
        {
            while(big[i] == little[i] && l < ft_strlen(little))
            {
                l++;
            }
            if(l == ft_strlen(little) - 1)
                return(i);
            else
                l = 0;
        }
        i++;
    }
    return(0);
}

int main()
{
    const char big[] = "bjonjoureuh";
    const char little[] = "jour";
    size_t len = 12;

    printf("func: %s\nMine: %s\n", strnstr(big, little, len), ft_strnstr(big, little, len));
    return(0);
}