/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_0x.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btiza <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:56:37 by btiza             #+#    #+#             */
/*   Updated: 2023/10/22 18:00:21 by btiza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	put_nbr_hex_low2(unsigned long long nb)
{
	int	count;

	char digits[] = "0123456789ABCDEF";
	count = ft_strlen_hexa(nb);
	if (nb >= 16)
	{
		put_nbr_hex_low2(nb / 16);
		write(1, &digits[nb % 16], 1);
	}
	return (count);
}

int	put_0x(unsigned long long nb)
{
	int	count;

	count = ft_strlen_p(nb);
	write(1, "0x", 2);
	put_nbr_hex_low2((unsigned long long)nb);
	return (count);
}
