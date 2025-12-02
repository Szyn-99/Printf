/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specifier_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymel-ha <aymel-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 10:55:57 by aymel-ha          #+#    #+#             */
/*   Updated: 2025/12/02 19:55:55 by aymel-ha         ###   ########.fr       */
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
