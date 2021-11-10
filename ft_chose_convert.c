/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chose_convert.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 09:51:45 by abarchil          #+#    #+#             */
/*   Updated: 2021/11/10 23:00:41 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_chose_convert(va_list arg, char c)
{
	if (c == 'c')
		return (ft_convert_c(arg));
	else if (c == 's')
		return (ft_convert_s(arg));
	else if (c == 'd' || c == 'i')
		return (ft_convert_di(arg));
	else if (c == 'x')
		return (ft_convert_x(arg));
	else if (c == 'X')
		return (ft_convert_xx(arg));
	else if (c == 'u')
		return (ft_convert_u(arg));
	else if (c == 'p')
		return (ft_convert_p(arg));
	else
	{
		ft_putchar_fd('%', 1);
		return (1);
	}
	return (0);
}
