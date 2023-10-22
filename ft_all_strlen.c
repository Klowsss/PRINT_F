/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_all_strlen.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btiza <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:44:19 by btiza             #+#    #+#             */
/*   Updated: 2023/10/20 19:34:38 by btiza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen_i_d(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		i++;
		n = n * -1;
	}
	while (n / 10 > 0)
	{
		n = n / 10;
		i++;
	}
	i++;
	return (i);
}

int	ft_strlen_hexa(int n)
{
	int	i;

	i = 0;
	while (n / 16 > 0)
	{
		n = n / 16;
		i++;
	}
	i++;
	return (i);
}

int	ft_strlen_p(int n)
{
	int	i;

	i = 0;
	while (n / 16 > 0)
	{
		n = n / 16;
		i++;
	}
	i++;
	return (i);
}

int	ft_strlen_pos(int n)
{
	int	i;

	i = 0;
	while (n / 10 > 0)
	{
		n = n / 10;
		i++;
	}
	i++;
	return (i);
}
