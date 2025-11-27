/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specifier_X.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymel-ha <aymel-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 12:03:53 by aymel-ha          #+#    #+#             */
/*   Updated: 2025/11/27 13:25:53 by aymel-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "declarations.h"

size_t	specifier_x_uppercase(size_t n)
{
	size_t	len;
	char	*p;

	len = 0;
	p = "0123456789ABCDEF";
	if (n >= 16)
		len += specifier_x_uppercase(n / 16);
	len += specifier_c(p[n % 16]);
	return (len);
}
