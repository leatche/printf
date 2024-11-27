/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcherepoff <tcherepoff@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 01:57:38 by tcherepoff        #+#    #+#             */
/*   Updated: 2024/11/27 01:59:39 by tcherepoff       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_num_len(unsigned int num, int base) {
    int len = 1;
    while (num >= (unsigned int)base) {
        num /= base;
        len++;
    }
    return len;
}

char *ft_itoa_base(unsigned int num, int base, int uppercase)
{
	char	*str;
	char	*base_chars;

	if (uppercase)
		base_chars = "0123456789ABCDEF";
	else
		base_chars = "0123456789abcdef";
	int len = ft_num_len(num, base);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (len > 0) {
		str[--len] = base_chars[num % base];  // Conversion du chiffre en caractère
	num /= base;
	}
	return (str);
}