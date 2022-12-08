/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: altikka <altikka@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 10:16:21 by altikka           #+#    #+#             */
/*   Updated: 2022/12/08 10:17:00 by altikka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_nbrlen(const char *src)
{
	size_t		len;
	const char	*p;

	if (!src)
		return (0);
	len = 0;
	p = src;
	if (*p == '-')
	{
		len++;
		p++;
	}
	while (ft_isdigit(*p))
	{
		len++;
		p++;
	}
	return (len);
}
