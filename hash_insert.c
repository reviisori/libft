/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hash_insert.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: altikka & atenhune <@student.hive.fi>       +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 13:11:14 by altikka           #+#    #+#             */
/*   Updated: 2022/11/01 17:41:52 by altikka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	hash_insert(t_hashmap *dest, char *key, int value)

{
	size_t	org;
	size_t	try;
	size_t	i;

	if ((float)(dest->len > (dest->capacity * 0.66f)))
	{
		if (hash_resize(dest) < 0)
			return (-1);
	}
	org = hash(key, dest->capacity);
	try = org;
	i = 0;
	while (i < dest->capacity)
	{
		if (dest->entries[try].key == NULL)
		{
			dest->entries[try].key = key;
			dest->entries[try].value = value;
			dest->len += 1;
			return (1);
		}
		i++;
		try = (i + org) % dest->capacity;
	}
	return (0);
}
