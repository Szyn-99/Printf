/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specifier_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szyn <szyn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 10:55:57 by aymel-ha          #+#    #+#             */
/*   Updated: 2025/11/30 20:01:31 by szyn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "declarations.h"

size_t	specifier_p(void *pointer)
{
	size_t	len;

	if (!pointer)
		return (specifier_s("(nil)"));
	len = 0;
	len += specifier_s("0x");
	len += specifier_x((unsigned long)pointer);
	return (len);
}
