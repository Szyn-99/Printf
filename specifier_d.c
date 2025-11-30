/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specifier_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szyn <szyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 10:35:41 by aymel-ha          #+#    #+#             */
/*   Updated: 2025/11/30 19:07:27 by szyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "declarations.h"

size_t	specifier_d(int number)
{
	size_t	len = 0;
	long			n;

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
