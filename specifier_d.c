/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specifier_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymel-ha <aymel-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 10:35:41 by aymel-ha          #+#    #+#             */
/*   Updated: 2025/12/02 19:55:50 by aymel-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "declarations.h"

size_t	specifier_d(int number)
{
	size_t	len;
	long	n;

	len = 0;
	n = number;
	if (n < 0)
	{
		n = -n;
		len += specifier_c('-');
	}
	if (n >= 10)
	{
		len += specifier_d(n / 10);
	}
	len += specifier_c((n % 10) + '0');
	return (len);
}
