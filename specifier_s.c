/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specifier_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymel-ha <aymel-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 12:05:07 by aymel-ha          #+#    #+#             */
/*   Updated: 2025/12/02 19:55:57 by aymel-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "declarations.h"

size_t	specifier_s(char *s)
{
	size_t	len;

	len = 0;
	if (!s)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	while (s[len])
	{
		specifier_c(s[len]);
		len++;
	}
	return (len);
}
