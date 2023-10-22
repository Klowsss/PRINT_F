/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_nbr_pos.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btiza <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:57:08 by btiza             #+#    #+#             */
/*   Updated: 2023/10/22 21:14:10 by btiza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	put_nbr_pos(unsigned int nb)
{
	int		count;

	count = ft_strlen_pos(nb);
	if (nb > 9)
	{
		put_nbr_pos(nb / 10);
		put_nbr_pos(nb % 10);
	}
	else
	{
		ft_putchar_fd(nb + '0');
	}
	return (count);
}
