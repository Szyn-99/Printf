/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specifier_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymel-ha <aymel-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 10:55:57 by aymel-ha          #+#    #+#             */
/*   Updated: 2025/11/27 12:13:02 by aymel-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "declarations.h"

size_t	specifier_p(void *pointer)
{
	size_t	len;

	len = 0;
	len += specifier_s("0x");
	len += specifier_x((size_t)pointer);
	return (len);
}
