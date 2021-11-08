/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 21:50:55 by abarchil          #+#    #+#             */
/*   Updated: 2021/11/03 13:31:52 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*str;
	size_t	i;

	i = 0;
	str = (void *)malloc(size * count);
	if (!str)
		return (NULL);
	while (((char *)str) && i < count * size)
	{
		((char *)str)[i] = 0;
		i++;
	}
	return (str);
}
