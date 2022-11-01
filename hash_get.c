/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hash_get.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: altikka & atenhune <@student.hive.fi>       +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 13:18:50 by altikka           #+#    #+#             */
/*   Updated: 2022/11/01 17:34:02 by altikka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	hash_get(t_hashmap *src, char *key)
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
			return (src->entries[try].value);
		i++;
		try = (i + org) % src->capacity;
	}
	return (0);
}
