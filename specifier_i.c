/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specifier_i.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymel-ha <aymel-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 12:18:54 by aymel-ha          #+#    #+#             */
/*   Updated: 2025/11/27 12:27:56 by aymel-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "declarations.h"

size_t specifier_i(long n)
{
    size_t len = 0;
    char *p = "0123456789";
    if(n < 0)
    {
        len += specifier_c('-');
        n = -n;
    }
    if(n >= 10)
        len += specifier_i(n/10);
    len += specifier_c(p[n%10]);
    return len;
}