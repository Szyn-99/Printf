/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specifier_X.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymel-ha <aymel-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 12:03:53 by aymel-ha          #+#    #+#             */
/*   Updated: 2025/11/27 12:04:19 by aymel-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "declarations.h"

size_t specifier_X(size_t n)
{
    size_t len = 0;
    char *p = "0123456789ABCDEF";
    if(n >= 16)
        len += specifier_X(n/16);
    len += specifier_c(p[n%16]);
    return len;
}