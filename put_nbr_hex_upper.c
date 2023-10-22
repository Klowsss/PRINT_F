/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_nbr_hex_upper.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btiza <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:57:29 by btiza             #+#    #+#             */
/*   Updated: 2023/10/22 19:21:42 by btiza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	put_nbr_hex_upper(unsigned long long nb, int fd)
{
	int		count;

	count = ft_strlen_hexa(nb);
	if (nb >= 16)
	{
		put_nbr_hex_upper(nb / 16, fd);
		put_nbr_hex_upper(nb % 16, fd);
	}
	else if (fd == 0)
		ft_putchar_fd("0123456789ABCDEF"[nb]);
	return (count);
}
