/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_nbr_dec_d_i.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btiza <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:56:48 by btiza             #+#    #+#             */
/*   Updated: 2023/10/22 18:00:40 by btiza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	put_nbr_dec_d_i(int nb)
{
	char	c;
	int		count;

	count = ft_strlen_i_d(nb);
	if (nb == -2147483647)
	{
		write(1, "-", 1);
		write(1, "2", 1);
		put_nbr_dec_d_i(nb);
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
		put_nbr_dec_d_i(nb);
	}
	else if (nb > 9)
	{
		put_nbr_dec_d_i(nb / 10);
		c = (nb % 10) + '0';
		write(1, &c, 1);
	}
	else
	{
		c = nb + '0';
		write(1, &c, 1);
	}
	return (count);
}
