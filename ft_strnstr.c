/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 19:32:38 by abarchil          #+#    #+#             */
/*   Updated: 2021/11/02 09:47:41 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	count;
	size_t	i;
	int		needle_len;

	count = 0;
	needle_len = ft_strlen(needle);
	if (!needle || needle_len == 0)
		return ((char *)haystack);
	while (haystack[count] && count < len)
	{
		i = 0;
		while (haystack[count + i] == needle[i] && count + i < len)
		{
			i++;
			if (needle[i] == '\0')
				return (&((char *)haystack)[count]);
		}
		count++;
	}
	return (0);
}
