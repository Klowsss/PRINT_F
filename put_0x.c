/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_0x.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btiza <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:56:37 by btiza             #+#    #+#             */
/*   Updated: 2023/10/22 20:39:47 by btiza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	put_nbr_hex_low2(unsigned long long nb)
{
	if (nb >= 16)
	{
		put_nbr_hex_low2(nb / 16);
		put_nbr_hex_low2(nb % 16);
	}
	else
		ft_putchar_fd("0123456789abcdef"[nb]);
}

int	put_0x(unsigned long long nb)
{
	write(1, "0x", 2);
	put_nbr_hex_low2((unsigned long long)nb);
	return (ft_strlen_hexa((unsigned long long)nb) + 2);
}
