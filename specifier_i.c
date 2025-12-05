/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specifier_i.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymel-ha <aymel-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 12:18:54 by aymel-ha          #+#    #+#             */
/*   Updated: 2025/12/05 16:06:28 by aymel-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "declarations.h"

size_t	specifier_i(int number)
{
	size_t	len;
	long	n;
	char	*p;

	n = number;
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
