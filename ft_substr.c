/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 19:27:46 by abarchil          #+#    #+#             */
/*   Updated: 2021/11/01 19:27:48 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	char			*tab;
	int				i;

	i = 0;
	str = (char *)s;
	if (start >= ft_strlen(str))
		return (ft_calloc(1, 1));
	tab = (char *)malloc(len + 1);
	if (!tab)
		return (NULL);
	while (str[start] && len > 0)
	{
		tab[i] = str[start];
		start++;
		i++;
		len--;
	}
	tab[i] = '\0';
	return (tab);
}
