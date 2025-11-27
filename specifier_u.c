/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specifier_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymel-ha <aymel-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 12:29:25 by aymel-ha          #+#    #+#             */
/*   Updated: 2025/11/27 12:30:16 by aymel-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "declarations.h"

size_t specifier_u(unsigned int  n)
{
    size_t len = 0;
    char *p = "0123456789";
    
    if(n >= 10)
        len += specifier_u(n/10);
    len += specifier_c(p[n%10]);
    return len;
}