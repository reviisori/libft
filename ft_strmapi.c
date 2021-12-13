/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: altikka <altikka@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 10:24:42 by altikka           #+#    #+#             */
/*   Updated: 2021/12/02 17:52:28 by altikka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			len;
	char			*fresh;
	unsigned int	i;

	if (s != NULL && f != NULL)
	{
		len = ft_strlen(s);
		fresh = (char *)malloc(sizeof(*fresh) * len + 1);
		if (fresh == NULL)
			return ((char *) NULL);
		i = 0;
		while (s[i])
		{
			fresh[i] = (*f)(i, s[i]);
			i++;
		}
		fresh[i] = '\0';
		return (fresh);
	}
	return ((void *) NULL);
}
