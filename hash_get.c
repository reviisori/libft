/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hash_get.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: altikka & atenhune <@student.hive.fi>       +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 13:18:50 by altikka           #+#    #+#             */
/*   Updated: 2022/11/11 16:07:47 by altikka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_hash	*hash_get(t_hashmap *src, char *key)
{
	size_t	org;
	size_t	try;
	size_t	i;

	org = hash(key, src->capacity);
	try = org;
	i = 0;
	while (i < src->capacity && src->entries[try].key != NULL)
	{
		if (!ft_strncmp(key, src->entries[try].key, ft_strlen(key) + 1))
			return (&src->entries[try]);
		i++;
		try = (i + org) % src->capacity;
	}
	return (NULL);
}
