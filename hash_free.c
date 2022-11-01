/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hash_free.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: altikka & atenhune <@student.hive.fi>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 13:08:54 by altikka           #+#    #+#             */
/*   Updated: 2022/11/01 17:40:31 by altikka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	hash_free(t_hashmap *src)
{
	free(src->entries);
	src->entries = NULL;
	src->capacity = 0;
	src->len = 0;
}
