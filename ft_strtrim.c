/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 19:26:50 by abarchil          #+#    #+#             */
/*   Updated: 2021/11/01 19:33:58 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	count;
	unsigned int	str_count;
	unsigned int	s1_size;
	char			*str;

	count = 0;
	str_count = 0;
	s1_size = ft_strlen(s1) - 1;
	while (s1[count] && ft_strchr(set, s1[count]) != 0)
		count++;
	if (s1[count] == '\0')
		return (ft_calloc(1, 1));
	while (s1_size > count && ft_strchr(set, s1[s1_size]) != 0)
		s1_size--;
	str = (char *)malloc(sizeof(char) * (s1_size - count) + 1);
	if (!str)
		return (NULL);
	while (count <= s1_size)
	{
		str[str_count] = s1[count];
		str_count++;
		count++;
	}
	str[str_count] = '\0';
	return (str);
}
