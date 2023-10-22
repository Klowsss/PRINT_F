/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_nbr_hex_low.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btiza <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:57:16 by btiza             #+#    #+#             */
/*   Updated: 2023/10/22 21:17:01 by btiza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int     put_nbr_hex_low(unsigned long nb, int fd)
{
        int             count;

        count = ft_strlen_hexa(nb);
        if (nb >= 16)
        {
                put_nbr_hex_low(nb / 16, fd);
                put_nbr_hex_low(nb % 16, fd);
        }
        else
                ft_putchar_fd("0123456789abcdef"[nb]);
        return (count);
}
