/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 07:26:33 by abarchil          #+#    #+#             */
/*   Updated: 2021/11/10 23:01:20 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_nbr_length(int n)
{
	int	length;

	length = 0;
	if (n == -2147483648)
		return (11);
	if (n == 0)
		return (1);
	if (n < 0)
	{
		length++;
		n = -n;
	}
	while (n != 0)
	{
		n /= 10;
		length++;
	}
	return (length);
}

int	ft_unsigned_nbr_length(unsigned int n)
{
	int	length;

	length = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		length++;
	}
	return (length);
}

int	ft_hex_length(int n)
{
	int	len;

	len = 0;
	if (n == 0 )
		return (1);
	while (n != 0)
	{
		n /= 16;
		len++;
	}
	return (len);
}

int	ft_str_search(char *s, char c)
{
	int	count;

	count = 0;
	if (!s)
		return (0);
	while (s[count])
	{
		if (s[count] == c)
			return (1);
		count++;
	}
	return (0);
}
