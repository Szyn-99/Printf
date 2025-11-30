/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specifier_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szyn <szyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 12:05:07 by aymel-ha          #+#    #+#             */
/*   Updated: 2025/11/30 19:11:08 by szyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "declarations.h"

size_t	specifier_s(char *s)
{
	size_t	len;

	len = 0;
	if (!s)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (s[len])
	{
		specifier_c(s[len]);
		len++;
	}
	return (len);
}
