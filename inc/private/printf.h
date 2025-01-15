/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 14:34:26 by maballet          #+#    #+#             */
/*   Updated: 2025/01/15 16:38:05 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_putstr(char *s);
int		ft_putnbr(int n);
int		ft_putnbrbase(unsigned long n, char *base, unsigned long baselen);
int		ft_putptr(void *ptr);
int		ft_putchar(char c);
int		ft_strlen(char *s);
char	*ft_strchr(const char *s, int c);
int		ft_check(va_list ap, int *i, const char *s);

#endif