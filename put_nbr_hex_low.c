/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_nbr_hex_low.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btiza <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:57:16 by btiza             #+#    #+#             */
/*   Updated: 2023/10/20 21:45:07 by btiza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	put_nbr_hex_low(unsigned long long nb, int fd)
{
	int		count;

	char	digits[] = "0123456789ABCDEF";
	count = ft_strlen_hexa(nb);
	if (nb >= 16)
	{
		put_nbr_hex_low(nb / 16, fd);
		write(fd, &digits[nb % 16], 1);
	}
	return (count);
}
