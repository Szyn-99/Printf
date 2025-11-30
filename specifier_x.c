/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specifier_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szyn <szyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 12:04:02 by aymel-ha          #+#    #+#             */
/*   Updated: 2025/11/30 19:59:04 by szyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "declarations.h"

size_t	specifier_x(unsigned long n)
{
	size_t	len;
	char	*p;

	len = 0;
	p = "0123456789abcdef";
	if (n >= 16)
		len += specifier_x(n / 16);
	len += specifier_c(p[n % 16]);
	return (len);
}
