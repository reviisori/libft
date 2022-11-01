/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hash_new.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: altikka & atenhune <@student.hive.fi>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 13:07:59 by altikka           #+#    #+#             */
/*   Updated: 2022/11/01 17:37:01 by altikka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	hash_new(t_hashmap *src, size_t init_size)
{
	src->entries = (t_hash *)ft_memalloc(sizeof(t_hash) * init_size);
	if (!src->entries)
		return (-1);
	src->capacity = init_size;
	src->len = 0;
	return (1);
}
