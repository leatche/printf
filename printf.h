/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcherepoff <tcherepoff@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 04:16:13 by tcherepoff        #+#    #+#             */
/*   Updated: 2024/11/27 02:08:52 by tcherepoff       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>

int	ft_printf(const char *src, ...);
int	ft_browse(const char *str, va_list args);

int	ft_count_d(va_list args);
int	ft_count_c(va_list args);
int	ft_count_p(va_list args);
int	ft_count_s(va_list args);
int	ft_count_u(va_list args);
int	ft_count_x(va_list args, int cap);

int	ft_type(char c, va_list args);
#endif