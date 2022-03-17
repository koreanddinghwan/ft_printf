/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myukang <myukang@student.42.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 04:09:13 by myukang           #+#    #+#             */
/*   Updated: 2022/03/18 05:05:06 by myukang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_recur_pointer(unsigned long long p, char *hex,
		int *count, int *rtn)
{
	if (p > 16)
	{
		ft_recur_pointer(p / 16, hex, count, rtn);
		if (*count >= 3)
		{
			ft_putchar_fd(hex[p % 16], 1);
			(*count)--;
			(*rtn)++;
		}
		else
			(*count)--;
	}
	else
	{
		ft_putchar_fd(hex[p % 16], 1);
		(*rtn)++;
	}
}

int	ft_print_pointer(void *p)
{
	int					rtn;
	unsigned long long	ull;
	char				*hex;
	int					count;

	rtn = 0;
	ull = (unsigned long long)p;
	hex = "0123456789abcdef";
	count = 16;
	rtn += ft_putstr_fd("0x1", 1);
	ft_recur_pointer(ull, hex, &count, &rtn);
	return (rtn);
}
