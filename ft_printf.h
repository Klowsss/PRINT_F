/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btiza <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:37:46 by btiza             #+#    #+#             */
/*   Updated: 2023/10/22 18:05:29 by btiza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <fcntl.h>
# include <limits.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <sys/stat.h>
# include <sys/types.h>
# include <unistd.h>

int		ft_putstr_fd(char *s);
int		ft_putchar_fd(char c);
int		ft_pourcent(void);
int		put_nbr_hex_low(unsigned long long nb, int fd);
int		put_nbr_hex_upper(unsigned long long nb, int fd);
int		put_nbr_pos(unsigned int nb);
int		put_nbr_dec_d_i(int nb);
int		put_0x(unsigned long long nb);
int		ft_strlen_i_d(int n);
int		ft_strlen_hexa(int n);
int		ft_strlen_p(int n);
int		ft_strlen_pos(int n);
int		ft_type_f(const char c, va_list args);
int		ft_printf(const char *s, ...);

#endif
