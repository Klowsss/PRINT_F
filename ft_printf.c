/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btiza <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 20:26:27 by btiza             #+#    #+#             */
/*   Updated: 2023/10/22 21:00:11 by btiza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_type_f(const char c, va_list args)
{
	int	ch;

	ch = 0;
	if (c == 'd' || c == 'i')
		ch = put_nbr_dec_d_i(va_arg(args, int));
	else if (c == 'c')
		ch = ft_putchar_fd(va_arg(args, int));
	else if (c == 'p')
		ch = put_0x(va_arg(args, unsigned long long));
	else if (c == 's')
		ch = ft_putstr_fd(va_arg(args, char *));
	else if (c == 'u')
		ch = put_nbr_pos(va_arg(args, unsigned int));
	else if (c == 'x')
		ch = put_nbr_hex_low(va_arg(args, unsigned int), 0);
	else if (c == 'X')
		ch = put_nbr_hex_upper(va_arg(args, unsigned int), 0);
	else if (c == '%')
		ch = ft_pourcent();
	return (ch);
}

int     ft_printf(const char *s, ...)
{
        va_list args;
        int             i;
        int             count_ch;

        va_start(args, s);
        i = 0;
        count_ch = 0;
        while (s[i] != '\0')
        {
                if (s[i] == '%')
                {
                        count_ch = count_ch + ft_type_f(s[i + 1], args);
                        i++;
                        i++;
                }
                write(1, &s[i], 1);
                i++;
                count_ch++;
        }
        return (count_ch);
}

int	ft_putchar_fd(char c)
{
	write(1, &c, 1);
	return (1);
}

