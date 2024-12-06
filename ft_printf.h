/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadouz <oadouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 20:43:48 by oadouz            #+#    #+#             */
/*   Updated: 2024/12/03 22:35:19 by oadouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_putchar(int c);
int		ft_putnbr(long nb);
int		ft_putstr(char *str);
int		print_add_p(void *ptr);
int		print_hex_low(unsigned int number);
int		print_hex_up(unsigned int number);
int		ft_printf(const char *str, ...);

#endif