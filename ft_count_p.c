/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcherepoff <tcherepoff@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 16:09:40 by tcherepoff        #+#    #+#             */
/*   Updated: 2024/11/28 01:00:50 by tcherepoff       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"
#include "limits.h"

int	ft_count_p(va_list args)
{
	void				*str;
	unsigned long		new;
	char				*help;
	int					len;

	str = va_arg(args, void *);
	new = (unsigned long)str;
	if (str == NULL)
	{
		ft_putstr_fd("(nil)", 1);
		return (5);
	}
	help = ft_itoa_base(new, 16, 0);
	ft_putstr_fd("0x", 1);
	ft_putstr_fd(help, 1);
	len = ft_strlen(help) + 2;
	free(help);
	return (len);
}
