/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: altikka <altikka@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 11:46:17 by altikka           #+#    #+#             */
/*   Updated: 2021/12/02 12:29:14 by altikka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, void const *src, size_t len)
{
	size_t	i;

	if (dst == src || len == 0)
		return ((void *) dst);
	if (dst < src)
	{
		i = 0;
		while (i < len)
		{
			((unsigned char *) dst)[i] = ((unsigned char *) src)[i];
			i++;
		}
	}
	else
	{
		i = len - 1;
		while (i > 0)
		{
			((unsigned char *) dst)[i] = ((unsigned char *) src)[i];
			i--;
		}
		((unsigned char *) dst)[i] = ((unsigned char *) src)[i];
	}
	return ((void *) dst);
}
