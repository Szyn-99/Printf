/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specifier_i.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymel-ha <aymel-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 12:18:54 by aymel-ha          #+#    #+#             */
/*   Updated: 2025/12/02 20:03:21 by aymel-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "declarations.h"

size_t	specifier_i(int n)
{
	size_t	len;
	char	*p;

	len = 0;
	p = "0123456789";
	if (n < 0)
	{
		len += specifier_c('-');
		n = -n;
	}
	if (n >= 10)
		len += specifier_i(n / 10);
	len += specifier_c(p[n % 10]);
	return (len);
}
