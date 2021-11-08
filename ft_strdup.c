/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 19:29:45 by abarchil          #+#    #+#             */
/*   Updated: 2021/11/01 19:29:47 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dest;
	char	*src;
	int		count;
	int		s_len;

	count = 0;
	src = (char *)s;
	s_len = ft_strlen(src);
	dest = (char *)malloc(sizeof(const char) * s_len + 1);
	if (!dest)
		return (NULL);
	while (count < s_len)
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (dest);
}
