/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcherepoff <tcherepoff@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 07:51:51 by tcherepoff        #+#    #+#             */
/*   Updated: 2024/11/28 01:00:50 by tcherepoff       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int	ft_browse(const char *str, va_list args)
{
	int	i;
	int	size;

	i = 0;
	size = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			if (str[i])
				size += ft_type(str[i], args);
		}
		else
		{
			ft_putchar_fd(str[i], 1);
			size++;
		}
		i++;
	}
	return (size);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		a;

	va_start(args, str);
	a = ft_browse(str, args);
	va_end(args);
	return (a);
}
