/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: altikka <altikka@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:55:15 by altikka           #+#    #+#             */
/*   Updated: 2022/10/27 14:57:39 by altikka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_dprintf(int fd, const char *format, ...)
{
	va_list	ap;
	char	*p;
	int		len;

	va_start(ap, format);
	len = ft_vasprintf(&p, format, ap);
	va_end(ap);
	if (len < 0)
		return (-1);
	write(fd, p, len);
	free(p);
	return (len);
}
