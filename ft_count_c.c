/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_c.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcherepoff <tcherepoff@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 16:10:07 by tcherepoff        #+#    #+#             */
/*   Updated: 2024/11/28 01:00:50 by tcherepoff       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int	ft_count_c(va_list args)
{
	char	c;

	c = (char)va_arg(args, int);
	ft_putchar_fd(c, 1);
	return (1);
}
