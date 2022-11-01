/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hash_resize.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: altikka & atenhune <@student.hive.fi>       +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 13:09:39 by altikka           #+#    #+#             */
/*   Updated: 2022/11/01 17:36:48 by altikka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	rehash(t_hashmap *dest, t_hashmap *src)
{
	size_t	i;

	i = 0;
	while (i < src->capacity)
	{
		if (src->entries[i].key)
			hash_insert(dest, src->entries[i].key,
				src->entries[i].value);
		i++;
	}
}

int	hash_resize(t_hashmap *src)
{
	t_hashmap	new;

	if (hash_new(&new, src->capacity * HASH_RESIZE_FAC) < 0)
		return (-1);
	rehash(&new, src);
	hash_free(src);
	*src = new;
	return (1);
}
