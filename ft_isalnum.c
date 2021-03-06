/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 21:51:05 by abarchil          #+#    #+#             */
/*   Updated: 2021/11/03 09:33:58 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if (!((c >= '0' && c <= '9') || ((c >= 'A' && c <= 'Z')
				|| (c >= 'a' && c <= 'z'))))
		return (0);
	else
		return (1);
}
