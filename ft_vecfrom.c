/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vecfrom.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: altikka <altikka@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 16:43:01 by altikka           #+#    #+#             */
/*   Updated: 2022/09/13 17:00:35 by altikka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "vec.h"

int	ft_vecfrom(t_vec *dest, const void *src, size_t n, size_t type)
{
	if (!dest || !src || type == 0)
		return (-1);
	else if (ft_vecnew(dest, n, type) < 0)
		return (-1);
	ft_memcpy(dest->data, src, dest->alloc_size);
	dest->len = n;
	return (1);
}
