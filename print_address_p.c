/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_address_p.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadouz <oadouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 00:51:33 by oadouz            #+#    #+#             */
/*   Updated: 2024/12/03 22:35:12 by oadouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	dnf(unsigned long number, int *count)
{
	if (number >= 16)
		dnf(number / 16, count);
	*count += ft_putchar("0123456789abcdef"[number % 16]);
}

int	print_add_p(void *ptr)
{
	int	count;

	count = 0;
	if (!ptr)
		return (write(1, "0x0", 3));
	count += write(1, "0x", 2);
	dnf((unsigned long)ptr, &count);
	return (count);
}
