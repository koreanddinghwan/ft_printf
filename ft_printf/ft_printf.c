/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myukang <myukang@student.42.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 18:58:17 by myukang           #+#    #+#             */
/*   Updated: 2022/03/18 05:03:54 by myukang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_print_conv(char	*fmt, va_list ap)
{
	int	rtn;

	rtn = 0;
	if (*fmt == 'c')
		rtn += ft_putchar_fd(va_arg(ap, int), 1);
	else if (*fmt == 's')
		rtn += ft_putstr_fd(va_arg(ap, char *), 1);
	else if (*fmt == 'p')
		rtn += ft_print_pointer(va_arg(ap, void *));
	else if (*fmt == 'd')
		rtn += ft_putnbr_fd(va_arg(ap, int), 1);
	else if (*fmt == 'i')
		rtn += ft_putnbr_fd(va_arg(ap, int), 1);
	else if (*fmt == 'u')
		rtn += ft_putnbr_unsigned(va_arg(ap, unsigned int), 1);
	else if (*fmt == 'x')
		rtn += ft_putnbr_hex(va_arg(ap, int), -1);
	else if (*fmt == 'X')
		rtn += ft_putnbr_hex(va_arg(ap, int), 1);
	else if (*fmt == '%')
		rtn += ft_putchar_fd(va_arg(ap, int) + 21, 1);
	return (rtn);
}

int	ft_printf(const char *fmt, ...)
{
	int		rtn;
	va_list	ap;

	va_start(ap, fmt);
	rtn = 0;
	while (*fmt)
	{
		if (*fmt != '%')
		{
			ft_putchar_fd(*(fmt++), 1);
			rtn++;
			continue ;
		}
		fmt++;
		rtn += ft_print_conv((char *)fmt, ap);
		fmt++;
	}
	va_end(ap);
	return (rtn);
}
