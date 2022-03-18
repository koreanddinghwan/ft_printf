/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myukang <myukang@student.42.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 17:34:59 by myukang           #+#    #+#             */
/*   Updated: 2022/03/14 13:37:56 by myukang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_get_right(char *ds, char *set)
{
	size_t	size;
	char	*origin;

	size = 0;
	origin = ds;
	while (*ds)
		ds++;
	ds--;
	while (*ds)
	{
		if (ft_strchr(set, *ds))
			size++;
		else
			break ;
		if ((size_t)(ds) == (size_t)origin)
			break ;
		ds--;
	}
	return (size);
}

static size_t	ft_get_left(char *ds, char *set)
{
	size_t	size;

	size = 0;
	while (*ds)
	{
		if (ft_strchr(set, *ds))
			size++;
		else
			break ;
		ds++;
	}
	return (size);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	size_t	left;
	size_t	right;

	if (!s1 || !set)
		return (0);
	left = ft_get_left((char *)s1, (char *)set);
	right = ft_get_right((char *)s1, (char *)set);
	if (ft_strlen((char *)s1) == left + right)
		return (ft_strdup(""));
	if ((ft_strlen((char *)s1) == left) && (left == right))
		return (ft_strdup(""));
	result = ft_calloc((ft_strlen((char *)s1))
			- left - right + 1, sizeof(char));
	if (!result)
		return (0);
	ft_strlcpy(result, (char *)s1 + left,
		(ft_strlen((char *)s1)) - left - right + 1);
	return (result);
}
