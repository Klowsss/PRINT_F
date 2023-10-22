/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_nbr_dec_d_i.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btiza <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:56:48 by btiza             #+#    #+#             */
/*   Updated: 2023/10/22 21:20:28 by btiza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int     put_nbr_dec_d_i(int nb)
{
        int     count;

        count = ft_strlen_i_d(nb);
        if (nb == -2147483647)
        {
                ft_putchar_fd('-');
		ft_putchar_fd('2');
		put_nbr_dec_d_i(147483647);
        }
        if (nb < 0)
        {
		nb = -nb;
                ft_putchar_fd('-');
        }
        else if (nb > 9)
        {
                put_nbr_dec_d_i(nb / 10);
                put_nbr_dec_d_i(nb % 10);
        }
        else
        {
                ft_putchar_fd(nb + '0');
        }
        return (count);
}
