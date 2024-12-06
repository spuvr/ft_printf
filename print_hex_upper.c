/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base2_X.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadouz <oadouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 00:59:55 by oadouz            #+#    #+#             */
/*   Updated: 2024/12/03 22:33:17 by oadouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	dnf2(unsigned int number, int *count)
{
	if (number >= 16)
		dnf2(number / 16, count);
	*count += ft_putchar("0123456789ABCDEF"[number % 16]);
}

int	print_hex_up(unsigned int number)
{
	int	count;

	count = 0;
	dnf2(number, &count);
	return (count);
}
