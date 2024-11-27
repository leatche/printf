/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcherepoff <tcherepoff@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 16:08:02 by tcherepoff        #+#    #+#             */
/*   Updated: 2024/11/25 01:42:51 by tcherepoff       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "printf.h"

int	ft_count_u(va_list args)
{
	unsigned int	number;
	char			*str;
	int				len;

	number = va_arg(args, unsigned int);
	str = ft_itoa(number); // itoa est ce bon sachant que notre number est un unsigned ? //
	ft_putstr_fd(str, 1);
	len = ft_strlen(str);
	free (str);
	return (len);
}