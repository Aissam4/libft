/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 21:51:59 by abarchil          #+#    #+#             */
/*   Updated: 2021/11/01 19:24:03 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			count;

	str = (unsigned char *)s;
	count = 0;
	while (count < n)
	{
		if (*str == (unsigned char)c)
			return (str);
		count++;
		str++;
	}
	return (0);
}
