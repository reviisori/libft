/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: altikka <altikka@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 12:55:39 by altikka           #+#    #+#             */
/*   Updated: 2021/12/13 19:04:22 by altikka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char const *haystack, char const *needle, size_t len)
{
	size_t	needle_len;
	size_t	haystack_len;

	if (needle[0] == '\0')
		return ((char *) haystack);
	needle_len = ft_strlen(needle);
	haystack_len = ft_strlen(haystack);
	if (len < needle_len || haystack_len < needle_len)
		return ((char *) NULL);
	while (len != 0 && haystack != NULL)
	{
		if (len >= needle_len && ft_strncmp(haystack, needle, needle_len) == 0)
			return ((char *) haystack);
		haystack++;
		len--;
	}
	return ((char *) NULL);
}
