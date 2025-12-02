/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specifier_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymel-ha <aymel-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 12:29:25 by aymel-ha          #+#    #+#             */
/*   Updated: 2025/12/02 19:55:59 by aymel-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "declarations.h"

size_t	specifier_u(unsigned int n)
{
	size_t	len;
	char	*p;

	len = 0;
	p = "0123456789";
	if (n >= 10)
		len += specifier_u(n / 10);
	len += specifier_c(p[n % 10]);
	return (len);
}
