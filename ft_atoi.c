/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 18:09:17 by maballet          #+#    #+#             */
/*   Updated: 2024/11/26 16:41:46 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	ft_verif(long n, int sign);

int	ft_atoi(const char *nptr)
{
	int		i;
	int		sign;
	long	result;

	i = 0;
	sign = 1;
	result = 0;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		if (ft_verif(result, sign) < 0)
			return (-1);
		if (ft_verif(result, sign) > 0)
			return (0);
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	return (result * sign);
}

static long	ft_verif(long n, int sign)
{
	long	num;

	num = n;
	if (num > num * 10 && sign < 0)
		return (1);
	if (num > num * 10 && sign > 0)
		return (-1);
	return (0);
}
