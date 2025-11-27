/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specifier_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymel-ha <aymel-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 10:35:41 by aymel-ha          #+#    #+#             */
/*   Updated: 2025/11/27 10:52:52 by aymel-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "declarations.h"

size_t	specifier_d(int number)
{
	static size_t	len = 0;
	long			n;

	n = number;
	if (n < 0)
	{
		n = -n;
		len += specifier_c('-');
	}
	if (n >= 10)
	{
		specifier_d(n / 10);
	}
	len += specifier_c((n % 10) + '0');
	return (len);
}
