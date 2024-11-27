/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltcherep <ltcherep@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 00:26:21 by tcherepoff        #+#    #+#             */
/*   Updated: 2024/11/27 17:12:09 by ltcherep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "printf.h"

int	ft_type(char c, va_list args)
{
	int	len;

	len = 0;
	if (c == 'c')
		len = ft_count_c(args);
	else if (c == 's')
		len = ft_count_s(args);
	else if (c == 'd' || c == 'i')
		len = ft_count_d(args);
	else if (c == 'u')
		len = ft_count_u(args);
	else if (c == 'x' || c == 'X')
		len = ft_count_x(args, c == 'X');
	else if (c == 'p')
		len = ft_count_p(args);
	else if (c == '%')
	{
		ft_putchar_fd('%', 1);
		len = 1;
	}
	return (len);
}
