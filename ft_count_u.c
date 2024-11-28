/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcherepoff <tcherepoff@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 16:08:02 by tcherepoff        #+#    #+#             */
/*   Updated: 2024/11/28 01:00:50 by tcherepoff       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"
#include "limits.h"

int	ft_count_u(va_list args)
{
	unsigned int	number;
	char			*str;
	int				len;

	number = va_arg(args, unsigned int);
	str = ft_itoa_unsigned(number);
	if (!str)
		return (0);
	ft_putstr_fd(str, 1);
	len = ft_strlen(str);
	free (str);
	return (len);
}
// TEST(2, print(" %u ", -1)) , TEST(24, print(" %u ", LONG_MAX));
	//TEST(25, print(" %u ", LONG_MIN));
	//TEST(26, print(" %u ", UINT_MAX));
	//TEST(27, print(" %u ", ULONG_MAX));
	//TEST(28, print(" %u ", 9223372036854775807LL));
	//TEST(29, print(" %u %u %u %u %u %u %u", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42));
