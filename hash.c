/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hash.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: altikka & atenhune <@student.hive.fi>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 13:06:20 by altikka           #+#    #+#             */
/*   Updated: 2022/11/01 17:50:44 by altikka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned long	hash(char *key, size_t capacity)
{
	unsigned long	hash_value;
	size_t			len;
	size_t			i;

	hash_value = 0;
	len = ft_strlen(key);
	i = 0;
	while (i < len)
	{
		hash_value += key[i] * (i + 1);
		hash_value = (hash_value * key[i]) % capacity;
		i++;
	}
	return (hash_value);
}
