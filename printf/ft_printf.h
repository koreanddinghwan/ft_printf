/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myukang <myukang@student.42.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 23:52:09 by myukang           #+#    #+#             */
/*   Updated: 2022/03/18 16:44:07 by myukang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "../libft/libft.h"
# include <stdarg.h>
/////////
#include <stdio.h>
//

int		ft_print_pointer(void *p);
int		ft_putnbr_hex(int n, int big_small);
int		ft_printf(const char *fmt, ...);

#endif
