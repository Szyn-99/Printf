/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymel-ha <aymel-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 18:54:13 by aymel-ha          #+#    #+#             */
/*   Updated: 2025/11/27 13:26:08 by aymel-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "declarations.h"

static int	specifiers_check(char c)
{
	return (c == 'c' || c == 's' || c == 'p' || c == 'd' || c == 'i' || c == 'u'
		|| c == 'x' || c == 'X' || c == '%');
}

static size_t	operations(va_list list, char c)
{
	size_t	len;

	len = 0;
	if (c == 'c')
		len += specifier_c(va_arg(list, int));
	else if (c == 'i' || c == 'd')
		len += specifier_i(va_arg(list, int));
	else if (c == 'p')
		len += specifier_p(va_arg(list, void *));
	else if (c == 's')
		len += specifier_s(va_arg(list, char *));
	else if (c == 'u')
		len += specifier_u(va_arg(list, unsigned int));
	else if (c == 'x')
		len += specifier_x(va_arg(list, unsigned int));
	else if (c == 'X')
		len += specifier_x_uppercase(va_arg(list, unsigned int));
	else if (c == '%')
		len += specifier_c('%');
	return (len);
}

int	ft_printf(const char *str, ...)
{
	va_list	arguments;
	int		i;
	size_t	count;

	va_start(arguments, str);
	i = 0;
	count = 0;
	if (!str)
		return (-1);
	while (str[i] != '\0')
	{
		if (str[i] == '%' && specifiers_check(str[i + 1]))
		{
			count += operations(arguments, str[i + 1]);
			i = i + 2;
		}
		else
		{
			count += specifier_c(str[i]);
			i++;
		}
	}
	return (count);
}
