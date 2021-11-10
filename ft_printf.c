/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 15:17:04 by abarchil          #+#    #+#             */
/*   Updated: 2021/11/10 23:00:17 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printf(const char *format, ...)
{
	int		len;
	int		count;
	va_list	arg;

	count = 0;
	len = 0;
	va_start(arg, format);
	if (ft_str_search((char *)format, '%') == 0)
	{
		ft_putstr_fd((char *)format, 1);
		return (ft_strlen(format));
	}
	while (format[count])
	{
		if (format[count] != '%')
			len += write(1, &format[count], 1);
		else
		{
			len += (ft_chose_convert(arg, format[count + 1]));
			count++;
		}
		count++;
	}
	va_end(arg);
	return (len);
}
