/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_x.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadouz <oadouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 00:51:36 by oadouz            #+#    #+#             */
/*   Updated: 2024/12/03 22:32:03 by oadouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	dnf3(unsigned int number, int *count)
{
	if (number >= 16)
		dnf3(number / 16, count);
	*count += ft_putchar("0123456789abcdef"[number % 16]);
}

int	print_hex_low(unsigned int number)
{
	int	count;

	count = 0;
	dnf3(number, &count);
	return (count);
}
