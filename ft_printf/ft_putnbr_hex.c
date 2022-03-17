/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myukang <myukang@student.42.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 04:08:49 by myukang           #+#    #+#             */
/*   Updated: 2022/03/18 05:05:18 by myukang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_recur_hex(unsigned long long ln, char *hex, int *rtn)
{
	if (ln > 16)
	{
		ft_recur_hex(ln / 16, hex, rtn);
		ft_putchar_fd(hex[(ln % 16)], 1);
		(*rtn)++;
	}
	else
	{
		ft_putchar_fd(hex[(ln % 16)], 1);
		(*rtn)++;
	}
}

int	ft_putnbr_hex(int n, int big_small)
{
	int				rtn;
	unsigned int	ln;
	char			*hex;

	rtn = 0;
	ln = n;
	if (big_small == 1)
		hex = "0123456789ABCDEF";
	else
		hex = "0123456789abcdef";
	ft_recur_hex(ln, hex, &rtn);
	return (rtn);
}
