/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hashmap.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: altikka & atenhune <@student.hive.fi>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 13:01:46 by altikka           #+#    #+#             */
/*   Updated: 2022/11/01 17:37:23 by altikka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HASHMAP_H

# define HASHMAP_H

# include "libft.h"

# define HASH_RESIZE_FAC 2

typedef struct s_hash
{
	char	*key;
	int		value;
}			t_hash;

typedef struct s_hashmap
{
	t_hash	*entries;
	size_t	capacity;
	size_t	len;
}			t_hashmap;

unsigned long	hash(char *key, size_t capacity);
int				hash_new(t_hashmap *src, size_t init_size);
int				hash_resize(t_hashmap *src);
void			hash_free(t_hashmap *src);
int				hash_insert(t_hashmap *dest, char *key, int value);
int				hash_lookup(t_hashmap *src, char *key);
int				hash_get(t_hashmap *src, char *key);

#endif
