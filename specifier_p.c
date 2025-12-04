/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specifier_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymel-ha <aymel-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 10:55:57 by aymel-ha          #+#    #+#             */
/*   Updated: 2025/12/04 15:40:07 by aymel-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "declarations.h"

static size_t	specifier_x_p(unsigned long n)
{
	size_t	len;
	char	*p;

	len = 0;
	p = "0123456789abcdef";
	if (n >= 16)
		len += specifier_x_p(n / 16);
	len += specifier_c(p[n % 16]);
	return (len);
}

size_t	specifier_p(void *pointer)
{
	size_t	len;

	if (!pointer)
		return (specifier_s("(nil)"));
	len = 0;
	len += specifier_s("0x");
	len += specifier_x_p((unsigned long)pointer);
	return (len);
}
