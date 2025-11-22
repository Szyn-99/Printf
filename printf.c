/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymel-ha <aymel-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 18:54:13 by aymel-ha          #+#    #+#             */
/*   Updated: 2025/11/22 19:00:35 by aymel-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "declarations.h"

int ft_printf(const char *str, ...)
{
    va_list arguments;
    va_start(arguments, str);
    int i = 0;
    while(str[i] != '\0')
    {
        if(str[i] == '%')
        {
            
        }
    }
}