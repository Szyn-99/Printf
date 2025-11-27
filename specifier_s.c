/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specifier_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymel-ha <aymel-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 12:05:07 by aymel-ha          #+#    #+#             */
/*   Updated: 2025/11/27 13:17:48 by aymel-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "declarations.h"

size_t specifier_s(char *s)
{
    size_t len = 0;
    if(!s)
        return specifier_s("NULL");
    while(s[len])
    {
        len += specifier_c(s[len]);
    }
    return len;
}