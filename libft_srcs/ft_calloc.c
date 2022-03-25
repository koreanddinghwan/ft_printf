/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myukang <myukang@student.42.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 16:34:36 by myukang           #+#    #+#             */
/*   Updated: 2022/03/25 20:14:44 by myukang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(t_size_t count, t_size_t size)
{
	void		*p;
	t_size_t	i;

	p = malloc(size * count);
	if (!p)
		return (0);
	i = 0;
	ft_bzero(p, count * size);
	return (p);
}
