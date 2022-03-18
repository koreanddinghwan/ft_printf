/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myukang <myukang@student.42.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 23:52:09 by myukang           #+#    #+#             */
/*   Updated: 2022/03/19 01:38:16 by myukang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "../libft_srcs/libft.h"
# include <stdarg.h>

int		ft_print_pointer(void *p);
int		ft_putnbr_hex(int n, int big_small);
int		ft_printf(const char *fmt, ...);

#endif
