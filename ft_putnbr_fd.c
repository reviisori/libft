/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: altikka <altikka@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:41:30 by altikka           #+#    #+#             */
/*   Updated: 2021/11/24 16:50:10 by altikka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n <= 2147483647 || n > -2147483648)
	{
		if (n < 0)
		{
			if (n == -2147483648)
			{
				ft_putchar_fd('-', fd);
				ft_putchar_fd('2', fd);
				ft_putnbr_fd(147483648, fd);
			}
			else
			{
				ft_putchar_fd('-', fd);
				ft_putnbr_fd(-n, fd);
			}
		}
		else if (n >= 10)
		{
			ft_putnbr_fd(n / 10, fd);
			ft_putnbr_fd(n % 10, fd);
		}
		else
			ft_putchar_fd(n + '0', fd);
	}
}
